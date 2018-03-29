#include <iostream>
#include <chrono>
#include <thread>
#include <string>

const int beep_no = 50;

void beep(){
	for(int i=0;i<beep_no;++i){
		std::cout<<'\a';
		std::this_thread::sleep_for(
			std::chrono::seconds(1));
	}
}
int main(int argc, char **argv){
	if (argc > 2){
		std::cout<<"Usage eyeprotecc [debug]";
		return 1;
	}

	std::cout<<"Starting timer.. \n";
	int sleep_time;

	if(argc==2 && !strcmp("debug", argv[1])){	
		sleep_time = 1;		
	}
	sleep_time = 20;

	std::this_thread::sleep_for(
			std::chrono::minutes(sleep_time));
	beep();
}
