Action()
{
		
		lr_start_transaction("T02");

		web_rest("GET: http://www.tmo.com",
		"URL=http://www.tmo.com",
		"Method=GET",
		"Snapshot=t117709.inf",
		LAST);
		
		lr_end_transaction("T02", LR_AUTO);

	
	
	return 0;
}
