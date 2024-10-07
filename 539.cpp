#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int Minutes(std::string str){
	return ((str[0]-'0')*10 + (str[1]-'0'))*60 + (str[2]-'0')*10 + (str[3]-'0');
}

int main(){
	std::vector<std::string> TimePoints;
	std::string time;
	while(std::cin>>time)
		TimePoints.push_back(time);
	int res=0;
	std::vector<int> min;
	min.reserve(TimePoints.size());
	for(int i=0; i!=min.size(); i++)
		min.push_back(Minutes(TimePoints[i]));
	

return 0;
}