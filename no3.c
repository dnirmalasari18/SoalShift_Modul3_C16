#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

pthread_t tid[6];
void *PlayAndCount(){

	pthread_t id = pthread_self();
	int iter;
	char x[100];

	if (pthreantem ("clear");
		printf ("1. Help\n");
		printf ("2. List\n");
		printf ("3. Play\n");
		printf ("4. Pause\n");
		printf ("5. Continue\n");
		printf ("6. Stop\n");
	}

	else if (pthread_equal(id,tid[2])){
		system ("clear");
		system ("ls| grep .mp3");
	}

	else if (pthread_equal(id,tid[3])){
		system ("clear");
		system ("cvlc *.mp3");
	}

	else if (pthread_equal(id,tid[4])){
		system ("clear");
		system ("kill -20 $(pgrep vlc)");
	}

	else if (pthread_equal(id,tid[5])){
		system ("clear");
		system ("kill -18 $(pgrep vlc)");
	}

	else if (pthread_equal(id,tid[6])){
		system ("clear");
		system ("kill -9 $(pgrep vlc)");
	}

	return NULL;
}

int main(void){

	int i=0;
	int t;
	int err;

	printf ("Music Player\n");
	sleep(1);
	printf ("1. Help\n");
	printf ("2. List\n");
	printf ("3. Play\n");
	printf ("4. Pause\n");
	printf ("5. Continue\n");
	printf ("6. Stop\n");

	while(1){

		int perintah;
		scanf ("%d", &perintah);
		system("pause");
		
		if (perintah == 1){
			printf ("Help:\n");
		}

		else if (perintah == 2){
			printf ("List:\n");
		}

		else if (perintah == 3){
			printf ("Playnow:\n");
		}

		else if (perintah == 4){
			printf ("Pause: Setelah berapa detik?\n");
			scanf ("%d", &t);
			sleep(t);
		}

		else if (perintah == 5){
			printf ("Continue: Setelah berapa detik?\n");
			scanf ("%d", &t);
			sleep(t);
		}

		else if (perintah == 6){
			printf ("Stop: Setelah berapa detik?\n");
			scanf ("%d", &t);
			sleep(t);
		}

		err = pthread_create(&(tid[perintah]),NULL, &PlayAndCount,NULL);

		if (err != 0){
			printf ("Can't create the thread:[%s]", strerror(err));
		}

	}

	return 0;
}
