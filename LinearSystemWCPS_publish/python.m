function [result status] = python(varargin)
%PYTHON Execute Python command and return the result, with a reference to
%Perl.m
%   PYTHON(PYTHONFILE) calls python script specified by the file PYTHONFILE
%   using appropriate python executable.
%
%   PYTHON(PYTHONFILE,ARG1,ARG2,...) passes the arguments ARG1,ARG2,...
%   to the python script file PYTHONFILE, and calls it by using appropriate
%   python executable.
%
%   RESULT=PYTHON(...) outputs the result of attempted python call.  If the
%   exit status of python is not zero, an error will be returned.
%
%   [RESULT,STATUS] = PYTHON(...) outputs the result of the python call, and
%   also saves its exit status into variable STATUS. 
% 
%   If the Python executable is not available, it can be downloaded from:
%     cygwin
%   See also SYSTEM, JAVA, MEX.
%   Copyright 2011-2011 The Wustl.
%   $Revision: 0.0.0.1 $
cmdString = '';
sensor_num=0;
param_data=[];
for i = 1:nargin
  thisArg = varargin{i};
  if isempty(thisArg) | ~ischar(thisArg)
    error(['All input arguments must be valid strings.']);
  elseif exist(thisArg)==2
    % This is a valid file on the MATLAB path
    if isempty(dir(thisArg))
      % Not complete file specification
      % - file is not in current directory
      % - OR filename specified without extension
      % ==> get full file path
      thisArg = which(thisArg);
    end
  elseif i==1
    % First input argument is PythonFile - it must be a valid file
    error(['Unable to find Python file: ', thisArg]);
  end
  % Wrap thisArg in double quotes if it contains spaces
  if any(thisArg == ' ')
    thisArg = ['"', thisArg, '"'];
  end
  if i==2
      sensor_num=str2num(thisArg);
  end
  if i==3
      param_data=thisArg;
  end
  if i==4
      cmd_code_ta=thisArg;
  end
  % Add argument to command string
  cmdString = [cmdString, ' ', thisArg];
end
errTxtNoPerl = 'Unable to find Python executable.';
if isempty(cmdString)
  error('No python command specified');
elseif ispc
  %PC
  pythonCmd = fullfile('C:','\cygwin\bin'); % correct configuration of this is critical
  cmdString = ['python2.6.exe' cmdString];
  pythonCmd = ['set PATH=',pythonCmd, ';%PATH%&' cmdString];
  [status, result] = dos(pythonCmd); % core command
else
  % UNIX, MAC OS
  [status, pythonCmd] = unix('which python');
  if (status == 0)
    cmdString = ['python', cmdString];
    [status, result] = unix(cmdString);
  else
    error(errTxtNoPerl);
  end
end
% Check for errors in shell command
if nargout < 2 && status~=0
  error(['System error: ', result, ...
      'Command executed: ', cmdString]);
end