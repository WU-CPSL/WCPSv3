<%
response.setStatus(301);
response.setHeader( "Location", "/ubersvn" );
response.setHeader( "Connection", "close" );
%>
