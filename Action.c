Action()
{

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"94\", \"Google Chrome\";v=\"94\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_concurrent_start(NULL);

	web_url("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"94\", \"Google Chrome\";v=\"94\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"94\", \"Google Chrome\";v=\"94\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"94\", \"Google Chrome\";v=\"94\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("1_flights search");

	web_reg_find("Text=flight search", "savecount=flightsearchtext",
		LAST);

	

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"94\", \"Google Chrome\";v=\"94\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	lr_think_time(100);

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t19.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("in_flights.gif", 
		"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t21.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("1_flights search",LR_AUTO);

	web_reg_find("Text=Find Flight", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(41);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={C_departCity}", ENDITEM, 
		"Name=departDate", "Value={C_departDate}", ENDITEM, 
		"Name=arrive", "Value={C_arriveCity}", ENDITEM, 
		"Name=returnDate", "Value={C_returnDate}", ENDITEM, 
		"Name=numPassengers", "Value={C_numPassengers}", ENDITEM, 
		"Name=seatPref", "Value={C_seatPref}", ENDITEM, 
		"Name=seatType", "Value={C_seatType}", ENDITEM, 
		"Name=findFlights.x", "Value=56", ENDITEM, 
		"Name=findFlights.y", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_start_transaction("1_finding flights");

	web_reg_find("Text=Finding flights", "savecount=Findingflightstext",
		LAST);
	lr_think_time(56);

	web_reg_save_param_attrib(
		"ParamName=C_outboundFlight",
		"TagName=input",
		"Extract=value",
		"Name=outboundFlight",
		LAST);
	
	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={C_outboundFlight}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=71", ENDITEM, 
		"Name=reserveFlights.y", "Value=7", ENDITEM, 
		LAST);

	lr_end_transaction("1_finding flights",LR_AUTO);

	lr_start_transaction("1_payment details");

	web_reg_find("Text=payment details", "savecount=paymentdetailstext",
		LAST);

	lr_think_time(52);

	
	
	web_submit_data("reservations.pl_4", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=firstName", "Value={C_firstName}", ENDITEM, 
		"Name=lastName", "Value={C_lastName}", ENDITEM, 
		"Name=address1", "Value={C_address1}", ENDITEM, 
		"Name=address2", "Value={C_address2}", ENDITEM, 
		"Name=pass1", "Value={C_pass1}", ENDITEM, 
		"Name=creditCard", "Value={C_creditCard}", ENDITEM, 
		"Name=expDate", "Value={C_expDate}", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=251;494;10/17/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=35", ENDITEM, 
		"Name=buyFlights.y", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_end_transaction("1_payment details", LR_AUTO);
	
	lr_start_transaction("1_invoice");
	web_reg_find("Text=Invoice", "savecount=Invoicetext",
		LAST);

	
	web_url("bookanother.gif",
		"URL=http://localhost:1080/WebTours/images/bookanother.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t25.inf", 
		LAST);

	

	lr_end_transaction("1_invoice",LR_AUTO);

	return 0;
}
