/*	curator.c
 *	
 *	Copyright (C) 2016 FS Curator All Rights Reserved.
 *	Main file for FS Curator
 *	
 */


int main(int argc, char **argv)
{
	
	if(argc>=1)
	load_config(argv[1]);
	
	
	return 0;
}
