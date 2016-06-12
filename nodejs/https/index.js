"use strict";

const express = require( "express" );
const fs = require( "fs" );
const http = require( "http" );
const https = require( "https" );

var credentials = {
		key: fs.readFileSync( "server-key.pem", "utf8" ),
		cert: fs.readFileSync( "server-cert.pem", "utf8" ),
		requestCert: false,
		rejectUnauthorized: false
	};

var app = express();

var httpserver = http.createServer( app );
var httpsserver = https.createServer( credentials, app );

app.get( "/", function( req,res ) {
	res.send( "Bismillah" );
} );

httpserver.listen( 8000 );
httpsserver.listen( 8443 );
