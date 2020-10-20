#include <iostream>
#include <cstdlib>
#include <locale>
#include <vector>

using namespace std;

#define DOIS 2

void printVector(std::vector<int> &aquiles){
	cout << "----\n\n";
    for(int i: aquiles){
        cout <<  i << "   ";      
    }
	  cout << "----\n\n";
}

vector<int> concatena(std::vector<int>& aquiles, std::vector<int> aquiles2){
	vector<int> resultado = aquiles;
	for(int i: aquiles2){
		resultado.push_back(i);
	}
	return resultado;
	
}

vector<int> aquilesSemPrimo(std:: vector <int> &aquiles, std:: vector <int> &aquiles2, std:: vector <int> &aquiles4){
	vector<int> aquiles5;
	vector<int> resultado = aquiles5;
	for(int i: aquiles2){
		int c, d;
			
		cout << "i:  "<< i <<"\n";
		
		for(int j: aquiles){
			cout<< "j:  "<< j <<"\n";
			c = i % j;
			
			if(c == 0 && i != j){
				d = 1;
				break;
			}else d = 0;
        }		
		if(d == 0){
			aquiles4.push_back(i);
		}
	}   
    return resultado;
}

int main()
{
	setlocale(LC_ALL,"ptb");
	
	int z, titan=1, max = (DOIS*(DOIS+1)+1);
    vector <int> aquiles;
		
	for(z = 1;titan <= max; z++){
			
	    titan = z * DOIS;
		int a = (titan + 1);		
		if (a <= max){		
			aquiles.push_back(a);
		}				
	}
	
	vector <int> aquiles2;
	int b;
	int max2 = aquiles[0]*aquiles[1]*DOIS+ aquiles[2];
	
	for(z = 1;titan <= max2; z++){
		int r = aquiles[0], s = z * DOIS, b;
		titan = r * s;    
				
		for(int i: aquiles){
			if (i  > r && titan <= max2){
				b = i + titan;
				if(b<= max2){
					aquiles2.push_back(b);
				}					
			}
		}				
	}
	
	vector<int> aquiles3 = concatena(aquiles, aquiles2);
		
	vector<int> aquiles4 = aquilesSemPrimo(aquiles, aquiles3, aquiles4);
	
	vector<int>aquiles6;
    aquiles6.assign(aquiles4.begin(), aquiles4.end());
    
	vector<int> aquiles7;
	int max3 = DOIS * aquiles4[0]*aquiles4[1]*aquiles4[2]+aquiles4[3];
	
	for(z = 1;titan <= max3; z++){
		int r = aquiles4[0]*aquiles4[1], s = z * DOIS, b;
		titan = r * s;  
					
		for(int i : aquiles4){
			if (i  > aquiles4[2] && titan <= max3){
				b = i + titan;
			
				if(b<= max3 && b > max2){
					aquiles7.push_back(b);
				}					
			}
		}				
	}
	
	vector<int> aquiles5 = concatena(aquiles4, aquiles7);
	
	vector<int> aquiles8;
	int max4 = DOIS * aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3] + aquiles4[4];
		
	for(z = 1;titan <= max4; z++){
		int r = aquiles4[0]*aquiles4[1]*aquiles4[2], s = z * DOIS, b;
		titan = r * s;  
						
		for(int i : aquiles5){
			if (i  > aquiles4[2] && titan <= max4){
				b = i + titan;
				
				if(b<= max4 && b > max3){
					aquiles8.push_back(b);
				}					
			}
		}				
	}
	
	vector<int> aquiles9 = concatena(aquiles5, aquiles8);
	
	vector<int> aquiles10;
	int max5 = DOIS * aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3] * aquiles4[4]+aquiles4[5];
		
	for(z = 1;titan <= max5; z++){
		int r = aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3], s = z * DOIS, b;
		titan = r * s;  
				
		for(int i : aquiles9){
			if (i  > aquiles4[3] && titan <= max5){
				b = i + titan;
			
				if(b<= max5 && b > max4){
					aquiles10.push_back(b);
				}					
			}
		}				
	}

	vector<int> aquiles11 = concatena(aquiles9, aquiles10);
	
	vector<int> aquiles12;
	int max6 = DOIS * aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3] * aquiles4[4]*aquiles4[5]+aquiles4[6];
		
	for(z = 1;titan <= max6; z++){
		int r = aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3]*aquiles4[4], s = z * DOIS, b;
		titan = r * s;  	
				
		for(int i : aquiles11){
			if (i  > aquiles4[4] && titan <= max6){
				b = i + titan;
				
				if(b<= max6 && b > max5){
					aquiles12.push_back(b);
				}					
			}
		}				
	}
	
	vector<int> aquiles13 = concatena(aquiles11, aquiles12);
	
	vector<int> aquiles14;
	int max7 = DOIS * aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3] * aquiles4[4]*aquiles4[5]*aquiles4[6]+aquiles4[7];
	
	for(z = 1;titan <= max7; z++){
		int r = aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3]*aquiles4[4]*aquiles4[5], s = z * DOIS, b;
		titan = r * s;  
					
		for(int i : aquiles13){
			if (i  > aquiles4[5] && titan <= max7){
				b = i + titan;
							
				if(b<= max7 && b > max6){
					aquiles14.push_back(b);
				}					
			}
		}				
	}
		
	vector<int> aquiles15 = concatena(aquiles13, aquiles14);
	cout<<aquiles15[1];
	vector<int> aquiles16;
	int max8 = DOIS * aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3] * aquiles4[4]*aquiles4[5]*aquiles4[6]*aquiles4[7]+aquiles4[8];
	
	for(z = 1;titan <= max8; z++){
		int r = aquiles4[0]*aquiles4[1]*aquiles4[2]*aquiles4[3]*aquiles4[4]*aquiles4[5]*aquiles4[6], s = z * DOIS, b;
		titan = r * s;  
					
		for(int i : aquiles15){
			if (i  > aquiles4[6] && titan <= max8){
				b = i + titan;
				
				//cout<<"titan B  "<< b;
			
				if(b<= max8 && b > max7){
					aquiles16.push_back(b);
				}					
			}
		}				
	}
    printVector(aquiles);
    printVector(aquiles2);
    printVector(aquiles3);
    printVector(aquiles4);
    printVector(aquiles5);
    
    cout<<max<<" maxs\n";
    cout<<max2<<" max2\n";
    cout<<max3<<" max3\n";
    cout<<max4<<" max4\n";
    cout<<max5<<" max5\n";
    cout<<max6<<" max6\n";
    cout<<max7<<" max7\n";
	
		/*cout<<"aquiles\n";
	printVector(aquiles);
	cout<<"aquiles2\n";
	printVector(aquiles2);
	cout<<"aquiles3\n";
	printVector(aquiles3);
	cout<<"aquiles4\n";
	printVector(aquiles4);*/
		   
	return 0;					
}
	

	


