#include <iostream>
using namespace std;

class wisky{
	double tax = 1.55;
	int cost;
	public:
		wisky(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	} 
	};
class cognac{
	double tax = 1.45;
	int cost;
	public:
		cognac(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
	};

class wine{
	double tax = 0.68;
	int cost;
	public:
		wine(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
		
class tabacco{
	double tax = 0.40;
	int cost;
	int n;
	public:
		tabacco(){}
		void costs(){cin>>cost>>n;}
		double total(){return tax * cost + n*0.594+(cost+(cost*tax)+(n*0.594))*0.1+(n*1.007+(n*0.4399));}
};

class perfume{
	double tax = 0.2;
	int cost;
	public:
		perfume(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class makeup{
	double tax = 0.2;
	int cost;
	public:
		makeup(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class clothes{
	double tax = 0.2;
	int cost;
	public:
		clothes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class expclothes{
	double tax = 0.25;
	int cost;
	public:
		expclothes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class shoes{
	double tax = 0.2;
	int cost;
	public:
		shoes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class expshoes{
	double tax = 0.25;
	int cost;
	public:
		expshoes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};


class bag{
	double tax = 0.2;
	int cost;
	public:
		bag(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class expbag{
	double tax = 0.5;
	int cost;
	public:
		expbag(){}
		void costs(){cin>>cost;}
		double total(){return (1852*0.2)+(cost-1852)*tax +cost;	}
};

class watch{
	double tax = 0.2;
	int cost;
	public:
		watch(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class overwatch{
	double tax = 0.50;
	int cost;
	public:
		overwatch(){}
		void costs(){cin>>cost;}
		double total(){return (1852*0.2)+(cost-1852)*tax +cost;	}
};

class camera{
	double tax = 0.1;
	int cost;
	public:
		camera(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};


class laptop{
	double tax = 0.1;
	int cost;
	public:
		laptop(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class cam{
	double tax = 0.2;
	int cost;
	public:
		cam(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class diet{
	double tax = 0.2;
	int cost;
	public:
		diet(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class cookie{
	double tax = 0.2;
	int cost;
	public:
		cookie(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class toy{
	double tax = 0.2;
	int cost;
	public:
		toy(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};

class sport{
	double tax = 0.2;
	int cost;
	public:
		sport(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};


int main() {

int no = 0;
string again = "y";


while( again == "y" || again == "Y")
{

    cout << "숫자 외 입력하지 마세요" << endl << endl;

    cout << "품목을 정하세요:"<<endl; 
	cout << "1-위스키( 일반적으로 양주로 표현되는 대부분의 증류주가 포함된다.)" << endl;
	cout <<	"2-꼬냑(과실주 증류주=브랜디)"<<endl;
	cout << "3- 포도주(과실주)" << endl;
	cout << "4- 담배" <<endl;
	cout << "5- 향수" <<endl; 
	cout << "6- 화장품" << endl;
	cout << "7- 일반의류(1000 달러 이하)" <<endl;
	cout << "8- 고급의류(100 달러 초과)" <<endl; 
	cout << "9- 일반신발(1000 달러 이하)" <<endl;
	cout << "10- 고급신발(100 달러 초과)" <<endl;
	cout << "11- 일반가방(1,852,000 원 이하)" << endl;
	cout << "12- 고급가방(1,852,000 원 초과)" << endl;
	cout << "13- 일반시계(1,852,000 원 이하)" <<endl;
	cout << "14- 고급시계(1,852,000 원 초과)" << endl;
	cout << "15- 카메라" <<endl;
	cout << "16- 노트북"<< endl;
	cout << "17- 캠코더" << endl;
	cout << "18- 건강보조제" << endl;
	cout << "19- 과자류" << endl;
	cout << "20- 완구류" <<endl;
	cout << "21- 운동용품" <<endl;


        cout << endl << "어떤 물품입니까? (1/17): ";
        cin >> no;
        cout << endl;

        switch(no)
        {
            case 1 :
                wisky* p1;
                p1 = new wisky(); 
				cout << "위스키 가격: (천 원)" <<endl; 
				p1->costs();
				cout << "총 금액은" <<	p1->total()<< " 천 원"<< endl<<endl;
				delete p1;
			    break;
            case 2 :
                cognac* p2;
                p2 = new cognac(); 
				cout << "꼬냑 가격: (천 원)" <<endl; 
				p2->costs();
				cout << "총 금액은" <<	p2->total()<< " 천 원"<< endl<<endl;
				delete p2;
                break;
            case 3 :
            	wine* p3;
                p3 = new wine(); 
				cout << "와인 가격: (천 원)" <<endl; 
				p3->costs();
				cout << "총 금액은" <<	p3->total()<< " 천 원"<< endl<<endl;
				delete p3;
				break;
            case 4 :
            	tabacco* p4;
                p4 = new tabacco(); 
				cout << "담배 가격: (천 원), 담배 갑 수" <<endl; 
				p4->costs();
				cout << "총 금액은" <<	p4->total()<< " 천 원"<< endl<<endl;
				delete p4;
				break;
			case 5 :
                perfume* p5;
                p5 = new perfume(); 
				cout << "향수 가격: (천 원)" <<endl; 
				p5->costs();
				cout << "총 금액은" <<	p5->total()<< " 천 원"<< endl<<endl;
				delete p5;
				break;
            case 6 :
                makeup* p6;
                p6 = new makeup(); 
				cout << "화장품 가격: (천 원)" <<endl; 
				p6->costs();
				cout << "총 금액은" <<	p6->total()<< " 천 원"<< endl<<endl;
				delete p6;
				break;
			case 7 :
                clothes* p7;
                p7 = new clothes(); 
				cout << "의류 가격: (천 원)" <<endl; 
				p7->costs();
				cout << "총 금액은" <<	p7->total()<< " 천 원"<< endl<<endl;
				delete p7;
				break;
			case 8 :
                expclothes* p8;
                p8 = new expclothes(); 
				cout << "의류 가격: (천 원)" <<endl; 
				p8->costs();
				cout << "총 금액은" <<	p8->total()<< " 천 원"<< endl<<endl;
				delete p8;
				break;
			case 9 :
                shoes* p9;
                p9 = new shoes(); 
				cout << "신발 가격: (천 원)" <<endl; 
				p9->costs();
				cout << "총 금액은" <<	p9->total()<< " 천 원"<< endl<<endl;
				delete p9;
				break;
			case 10 :
                expshoes* p10;
                p10 = new expshoes(); 
				cout << "신발 가격: (천 원)" <<endl; 
				p10->costs();
				cout << "총 금액은" <<	p10->total()<< " 천 원"<< endl<<endl;
				delete p10;
				break;
			case 11 :
                bag* p11;
                p11 = new bag(); 
				cout << "가방 가격: (천 원)" <<endl; 
				p11->costs();
				cout << "총 금액은" <<	p11->total()<< " 천 원"<< endl<<endl;
				delete p11;
				break;
			case 12 :
                expbag* p12;
                p12 = new expbag(); 
				cout << "가방 가격: (천 원)" <<endl; 
				p12->costs();
				cout << "총 금액은" <<	p12->total()<< " 천 원"<< endl<<endl;
				delete p12;
				break;
			case 13 :
                watch* p13;
                p13 = new watch(); 
				cout << "시계 가격: (천 원)" <<endl; 
				p13->costs();
				cout << "총 금액은" <<	p13->total()<< " 천 원"<< endl<<endl;
				delete p13;
				break;
			case 14 :
                overwatch* p14;
                p14 = new overwatch(); 
				cout << "시계 가격: (천 원)" <<endl; 
				p14->costs();
				cout << "총 금액은" <<	p14->total()<< " 천 원"<< endl<<endl;
				delete p14;
				break;		
			case 15 :
                camera* p15;
                p15 = new camera(); 
				cout << "카메라 가격: (천 원)" <<endl; 
				p15->costs();
				cout << "총 금액은" <<	p15->total()<< " 천 원"<< endl<<endl;
				delete p15;
				break;			   
			case 16 :
                laptop* p16;
                p16 = new laptop(); 
				cout << "노트북 가격: (천 원)" <<endl; 
				p16->costs();
				cout << "총 금액은" <<	p16->total()<< " 천 원"<< endl<<endl;
				delete p16;
				break;
            case 17 :
                cam* p17;
                p17 = new cam(); 
				cout << "캠코더 가격: (천 원)" <<endl; 
				p17->costs();
				cout << "총 금액은" <<	p17->total()<< " 천 원"<< endl<<endl;
				delete p17;
				break;   
			 case 18 :
                diet* p18;
                p18 = new diet(); 
				cout << "건강보조제 가격: (천 원)" <<endl; 
				p18->costs();
				cout << "총 금액은" <<	p18->total()<< " 천 원"<< endl<<endl;
				delete p18;
				break;   
			 case 19 :
                cookie* p19;
                p19 = new cookie(); 
				cout << "과자 가격: (천 원)" <<endl; 
				p19->costs();
				cout << "총 금액은" <<	p19->total()<< " 천 원"<< endl<<endl;
				delete p19;
				break;   
			 case 20 :
                toy* p20;
                p20 = new toy(); 
				cout << "완구 가격: (천 원)" <<endl; 
				p20->costs();
				cout << "총 금액은" <<	p20->total()<< " 천 원"<< endl<<endl;
				delete p20;
				break;   	
			 case 21 :
                sport* p21;
                p21 = new sport(); 
				cout << "운동용품 가격: (천 원)" <<endl; 
				p21->costs();
				cout << "총 금액은" <<	p21->total()<< " 천 원"<< endl<<endl;
				delete p21;
				break;   			
			default :
                cout << "덦는 품목입니다 더 많은 정보는 관세청 홈페이지에서 찾으시기 바랍니다."<<endl;

        }   
    cout<<"신고 미이행시에는 납부세액의 40% 또는 60%(반복적 신고 미이행자)의 가산세가 부과됩니다."<<endl;
    cout << "찾으시는 품목이 있습니까? (Y/N)" << endl;
    cin >> again;
    cout << endl;

}

    cout << "Ending...";

}
