Action()
{
	
	lr_start_transaction("T03");
	
	lr_output_message("Hello TMobile, {p_MSIDN}");
	
	lr_end_transaction("T03", LR_AUTO);


	
	return 0;
}
