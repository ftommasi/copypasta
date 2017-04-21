//Navy Seal copypasta code.
//makes it look like its being typed by the computer

#include <stdio.h>

#define DELAY_FACTOR 9000
#define CLEAR_SCREEN_AMOUNT 1000
#define NUM_DELIMS 4
#define INNER_WORD_DELAY 1000
#define DELIM_DELAY 8999
#define SPACE_DELAY 2999
#define bool char

void delay(int n){
  //TODO add thread sleep for compilers that support it
  int i;
  for(i = 0; i < n; i++){}
}

void addDelay(int amount){
  int i = 0;
  for(i; i < amount; i++){
    delay(DELAY_FACTOR);
  }
}

void clearScreen(int amount){
  int i = 0;
  for(i; i < amount; i++){
    putchar('\n');
  }
}

int main(){
  while(1){
    int i =0;
    int j = 0;
    int len = 1519; //pre-computer length of NSCP
    char* delimeters = ".,? ";
    bool is_space = 0 ;
    bool extra_delay;
    char* nscp =
      "What the fuck did you just fucking say about me, you little bitch? I’ll have you know I graduated top of my class in the Navy Seals, and I’ve been involved in secret raids on Al-Quaeda, and I have over 300 confirmed kills. I am trained in gorilla warfare and I’m the top sniper in the entire US armed forces. You are nothing to me but just another target. I will wipe you out with precision the likes of which has never been seen before on this Earth, mark my words. You think you can get away with saying shit to me over the Internet? Think again, fucker. As we speak I am contacting my network of spies across the USA and your IP is being traced right now so you better prepare for the storm, maggot. The storm that wipes out the pathetic little thing you call your life. You’re fucking dead, kid. I can be anywhere, anytime, and I can kill you in over seven hundred ways, and that’s just with my bare hands. Not only am I extensively trained in unarmed combat, but I have access to the entire arsenal of the United States Marine Corps and I will use it to its full extent to wipe your ass off the face of the continent, you little shit. If only you could have known what unholy retribution your little “clever” comment was about to bring down upon you, maybe you would have held your tongue. You didn’t, and now you’re paying the price, you goddamn idiot. I will shit all over you and you will drown in it. You’re fucking dead, kiddo.";
    
    clearScreen(CLEAR_SCREEN_AMOUNT);

    while(i < len){
      extra_delay = 0;
      is_space = 0;
      for(j=0; j < NUM_DELIMS; j++){
        //we want to wait longer when we see a special delimiting character in delimeters
        if(nscp[i] == ' '){
          is_space = 1;
        }
        else if(nscp[i] == delimeters[j]){
          extra_delay = 1;
        }
      }

      putchar(nscp[i]);
      fflush(stdout);
      addDelay(INNER_WORD_DELAY);
      i++;
      if(is_space){
        addDelay(SPACE_DELAY);  
      }
      if(extra_delay){
        addDelay(DELIM_DELAY);  
      }
    
    }
    

  }
}
