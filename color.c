
task Color()
{
	setSoundVolume(1);
	while(true)
	{
		getColorRawRGB(S1, r1, g1, b1);
		getColorRawRGB(S2, r2, g2, b2);
		getColorRawRGB(S3, r3, g3, b3);
		if(g1 > r1*2 && g1 > b1 && g1 > 70 && b1 > 40)
		{
			green1 = true;
		}
		else
		{
			green1 = false;
		}

		if(g2 > r2*2 && g2 > b2 && g2 > 135 && b2 > 35)
		{
			green2 = true;
		}
		else
		{
			green2 = false;
		}

		if(g3 > r3*2 && g3 > b3 && g3 > 10)
		{
			green3 = true;
			playSound(soundBlip);
		}
		else
		{
			green3 = false;
		}



		if(r1 > g1*2 && r1 > b1*2 && r1 > 55 && b1 > 15)
		{
			red1 = true;
			playSound(soundBlip);
		}
		else
		{
			red1 = false;
		}

		if(r2 > g2*2 && r2 > b2*2 && g2 > 125 && b2 > 10)
		{
			red2= true;
			playSound(soundBlip);
		}
		else
		{
			red2 = false;
		}
		if(r3 > g3*2 && r3 > b3*2 && r3 > 70)
		{
			red3= true;
			playSound(soundBlip);
		}
		else
		{
			red3 = false;
		}




		S1N = 100 * (g1 - black1)/(white1 - black1);
		S2N = 100 * (g2 - black2)/(white2 - black2);

		if(S1N > sil_1)
		{
			silver1 = true;
		}
		else
		{
			silver1 = false;
		}
		if(S2N > sil_2)
		{
			silver2 = true;
		}
		else
		{
			silver2 = false;
		}

		if(S1N<4 && S2N<1)
		{

			clearTimer(T1);
		}

		displayTextLine(0,"rgb1: %d %d %d", r1, g1, b1);
		displayTextLine(1,"rgb2: %d %d %d", r2, g2, b2);
		displayTextLine(2,"rgb3: %d %d %d", r3, g3, b3);
		displayTextLine(3,"black: %d %d",black1, black2);
		displayTextLine(4,"white: %d %d",white1, white2);
		displayTextLine(5,"norm: %d %d", S1N, S2N);
		displayTextLine(6,"green: %d %d", green1, green2);
		displayTextLine(7,"silver: %d %d", silver1, silver2);
		sleep(10);

	}
}

task main()
{
	startTask(Color);
	sleep(50000000000000);


}
