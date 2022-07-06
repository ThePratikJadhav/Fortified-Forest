#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 class forest;
 class calculate;
class king

{
  public:
     char kingName[20];
  public:
     float forestCircumference;
     int noOfTreesInForest,aditya;
     int noOfTreesRequired;
     int woodRequirement;

  public:
    void setkingDetails()
     {
       cout << "Enter Kingdom Name:" << '\n';
       cin >> kingName;
       cout << "Enter forestCircumference (in meter):" << '\n';
       cin >> forestCircumference;
       woodRequirement=(forestCircumference/1000);
       cout << "Wood Requirement for the fence is :\t" <<woodRequirement<<"     Tones"<< '\n';
       noOfTreesRequired=(woodRequirement*2)+1;
       aditya=noOfTreesRequired;
       cout << "No Minimum trees required:\t" <<noOfTreesRequired<< '\n';
       cout << "Enter no of trees in Forest:" << '\n';
       cin >> noOfTreesInForest;
       if ((noOfTreesInForest/2) < noOfTreesRequired)
	{
	 cout << "\t\t INSUFFICIENT NO OF TREES FOR FENCE , LATER YOU HAVE TO PLANT MORE TREES.." << '\n';

			  }
      else
	    {
	     cout << "You Have Enough Trees in the Forest" <<endl;

	    }

       }
 public:
void getkingDetails()
{
   cout << "\t\tName Of KingDom                 :\t" <<kingName <<'\n';
   cout << "\t\tTotal Forest Area               :\t" <<forestCircumference<< '\n';
   cout << "\t\tWood Requirement For Fencing    :\t" <<woodRequirement<<" Tones" <<'\n';
   cout << "\t\tTrees Requirement For Fencing   :\t" <<aditya <<'\n';
   cout << "\t\tNo of trees in The Forest       :\t" <<noOfTreesInForest <<'\n';

}

 };

  struct tree
       { int importance;
	 char treeName[30];
	 int numberOfTree;
	 int cutableTree;
    }t[10];



 class forest
{ public:

  int status,i;
  int totalTrees;

public:

 int setForest(king *k)
 {
     do
     {
     t[10].importance=10;
     strcpy(t[10].treeName,"Red Sandle");
     cout<<"Enter no Of Trees of Red Sandle"<<endl;
     cin>>t[10].numberOfTree;

     t[9].importance=9;
     strcpy(t[9].treeName,"Mahogany");
     cout<<"Enter no Of Trees of Mahogany"<<endl;
     cin>>t[9].numberOfTree;

     t[8].importance=8;
     strcpy(t[8].treeName,"Baniyan");
     cout<<"Enter no Of Trees of Baniyan"<<endl;
     cin>>t[8].numberOfTree;

     t[7].importance=7;
     strcpy(t[7].treeName,"Peeple");
     cout<<"Enter no Of Trees Of Peeple"<<endl;
     cin>>t[7].numberOfTree;

     t[6].importance=6;
     strcpy(t[6].treeName,"Mango");
     cout<<"Enter no Of Trees Of Mango"<<endl;
     cin>>t[6].numberOfTree;

     t[4].importance=4;
     strcpy(t[4].treeName,"Neem Tree");
     cout<<"Enter no Of Trees Of Neem tree"<<endl;
     cin>>t[4].numberOfTree;

     t[3].importance=3;
     strcpy(t[3].treeName,"Amla Plant");
     cout<<"Enter no Of Trees of Amla Plant"<<endl;
     cin>>t[3].numberOfTree;

     t[2].importance=2;
     strcpy(t[2].treeName,"Coconut tree");
     cout<<"Enter no Of Trees of Coconut tree"<<endl;
     cin>>t[2].numberOfTree;

     t[1].importance=1;
     strcpy(t[1].treeName,"Bamboo");
     cout<<"Enter no Of Trees of Bamboo"<<endl;
     cin>>t[1].numberOfTree;

     t[5].importance=5;
     strcpy(t[5].treeName,"other");
     cout<<"Enter no of trees of Other trees"<<endl;
     cin>>t[5].numberOfTree;
      totalTrees=(t[1].numberOfTree+t[2].numberOfTree+t[3].numberOfTree+t[4].numberOfTree+t[5].numberOfTree+t[6].numberOfTree+t[7].numberOfTree+t[8].numberOfTree+t[9].numberOfTree+t[10].numberOfTree);

      if(totalTrees==k->noOfTreesInForest)
     {
       cout<<"Congrajultions Total No Of Trees matches with the no of trees"<<endl;
       status=0;
     }
     else
     {
       cout << "Wrong enterdd data" << '\n';
       status=1;
     }
   }while(status==1);
     return 0;
   }


 public:
  void getForest()
   {
    for(i=1;i<11;i++)
   {
    cout << "\tThe Tree no." << i <<" is :\t" <<t[i].treeName<< '\n';
    cout << "\tThe No of Trees :\t" <<t[i].numberOfTree<<endl;
   }
   }

 };

class calculate
{
 public:
      int i;
      int cutable,temp,reqCutable;

public:
void calculateForest(king *k)
    {
	i=1;
	while(i<11)
	   {
	     cutable=t[i].numberOfTree-(i*2);
	      if(cutable==k->noOfTreesRequired || cutable>k->noOfTreesRequired )
		{

		 t[i].cutableTree=reqCutable;
		 i=i+11;
		}
	      else
	      {
		t[i].cutableTree=cutable;
		temp=cutable;
		reqCutable=k->noOfTreesRequired-temp;
		k->noOfTreesRequired=reqCutable;
		i++;
	      }

	  }

    }
 public:
 void showCutable()
      {

	cout << "\t\t----------------------------------------------------------" << '\n';
       for(i=1;i<11;i++)
       {
	 cout<<"\t\tThe Cutable trees of "<<t[i].treeName<<" are :\t"<<t[i].cutableTree<<endl;
       }




      }






 };




int main()
 {
   
   king k;
   forest f;
   calculate c;
   k.setkingDetails();
   f.setForest(&k);
   c.calculateForest(&k);
   k.getkingDetails();
  // f.getForest();
   c.showCutable();
   
   return 0;

 }
