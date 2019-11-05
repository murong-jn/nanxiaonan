#include<iostream> 
#include<string.h>
using namespace std;
class COMMON{
protected:	
	string *pName;
	string *pAddress;
	string *pNum;
public:
	void Point(void){
		cout<<"姓名"<<pName<<'\t' ;
		cout<<"地址"<<pAddress<<'\t' ;
		cout<<"电话"<<pNum<<'\t' ;		
	}	
	void Init(string *,string *,string *);
	void Freespace(void);
	void SetName(string *name){
		pName=new string[strlen(name)+1];
		strcpy(pName,name);
	}
	void SetAddress(string *address){
		pAddress=new string[strlen(address)+1];
		strcpy(pAddress,address);
	}
	void SetNum(string *num){
		pNum=new string[strlen(num)+1];
		strcpy(pNum,num);
	}
	string *GetName(void){
		return pName;
	}
	string *GetAddress(void){
		return pAddress;
	}
	string *GetNum(void){
		return pNum;
	}
	void DeleteName(string *name){
		pName=new string[strlen(name)-1];
		strcpy(pName,name);
	}
	void DeleteAddress(string *address){
		pAddress=new string[strlen(address)-1];
		strcpy(pAddress,address);
	}
	void DeleteNum(string *num){
		pNum=new string[strlen(num)-1];
		strcpy(pNum,num);
	}
};
void COMMON::Init(string *name,string *unit,string *num){
	pName=new string[strlen(name)+1];
	strcpy(pName,name);
	pAddress=new string[strlen(unit)+1];
	strcpy(pAddress,unit);
	pNum=new string[strlen(num)+1];
	strcpy(pNum,num);
}
void COMMON::Freespace(void){
	if(pName) delete[]pName;
	if(pAddress) delete[]pAddress;
	if(pNum) delete[]pNum;
}

class Center:public COMMON{
	public:	
	int KPM_Find(string &address,int next[]); 
	int Distribute(Courier.name,Usr.name,Courier.address,User.address){
		int n=KPM_Find(courier.address,User.address);
		if(n=0){
		cout<<"不在派送范围内，无法递送"<<endl;
		return 0;
		}
		else{
		cout<<Courier.name<<endl<<User.name<<endl;
		return 1;
		}
	}
};


int Center::KPM_Find(string &address,int next[]){
	int i=0,j=0,pos;
	while(i<size-1&&j<address.size-1){
		if(j==1||ch[i]==address.ch[j]){
			i++;j++; 
		}else j=next[j];
	}
	if(j>address.size-1)
	pos=i-address.size+1;
	else pos=0;
	return pos;
}

class Courier:public COMMON,public Center{
	public:
	void LookThough(){
		int t=Distribute();
		if(t=0)
			cout<<"NO";
		else
			cout<<"姓名"<<*GetName(User.name)<<"地址"<<*GetAddressUser.address()<<"电话" <<GetNum(User.num)<<endl ;
	}	 
};

class User:public COMMON,public Center{
	public:
	void Register(void){
		SetName(name);
		SetAddress(address);
		SetNum(num);
	}
	void ReviseName(void){
		DeleteName();
		SetName(name);
	}
	void ReviseAddress(void){
		DeleteAddress();
		SetAddress(address);
	}
	void ReviseNum(void){
		DeleteNum();
		SetNum(num);
	}
	void UCancellate(void){
		DeleteName();
		DeleteAddress();
		DeleteNum();
	}
	void ULookThough(){
		int t=Distribute();
		if(t=0)
			cout<<"NO";
		else
			cout<<"姓名"<<*GetName(Courier.name)<<"电话" <<GetNum(Courier.num)<<endl ;
	}	 
};
