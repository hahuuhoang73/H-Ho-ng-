#include <stdio.h>
int main(){
	int day,mon,ngay,thu;
	
	printf("nhap ngay day: "); scanf("%d", &day);
	printf("nhap thang mon: "); scanf("%d", &mon);
	
//t1=30;
//t2=28;
//t3=31;
//t4=30;
//t5=31;
//t6=31;
//t7=30;
//t8=31;
//t9=30;
//t10=31;
//t11=31;
//t12=31;


	if (day>0 && day <=31 && mon==1){
       	ngay=day;
       	 thu=ngay %7;
	    printf("so ngay la ngay= %d\n", ngay);
	    
	  switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	  
	}else
		
	if (day>0 && day <=28 && mon==2){
	    ngay=31+day;
	     thu=ngay %7;
	    printf("so ngay la ngay= %d\n", ngay);
	    
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	     
	if (day>0 && day <=31 && mon==3){
	   ngay=59+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	   
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=30 && mon==4){
	    ngay=90+day;
	     thu=ngay %7;
	    printf("so ngay la ngay= %d\n", ngay);
	    
		switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
    }else 
	
	if (day>0 && day <=31 && mon==5){
	   ngay=120+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	   
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=30 && mon==6){
	   ngay=151+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=31 && mon==7){
	   ngay=181+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=31 && mon==8){
	   ngay=212+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=30 && mon==9){
	   ngay=243+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=31 && mon==10){
	   ngay=273+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	
	switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=30 && mon==11){
	   ngay=304+day;
	    thu=ngay %7;
	   printf("so ngay la ngay= %d\n", ngay);
	   
	   switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else
	
	if (day>0 && day <=31 && mon==12){
	   ngay=334+day;
	    thu=ngay %7;
	   printf("so ngay trong nam la %d\n", ngay);
	   //thu=ngay %7;
    
    switch(thu){
    	
    	case(0):
    		printf("day: %d \nmon: %d \nla chu nhat ",day,mon);
    	break;
		
		case(1):
    		printf("day: %d \nmon: %d \nla thu 2 ",day,mon);
    	break;
		
		case(2):
    		printf("day: %d \nmon: %d \nla thu 3 ",day,mon);
    	break;
    	
    	case(3):
    		printf("day: %d \nmon: %d \nla thu 4 ",day,mon);
    	break;
    	
    	case(4):
    		printf("day: %d \nmon: %d \nla thu 5 ",day,mon);
    	break;
    	
    	case(5):
    		printf("day: %d \nmon: %d \nla thu 6 ",day,mon);
    	break;
		
		case(6):
    		printf("day: %d \nmon: %d \nla thu 7 ",day,mon);
    	break;
		}
	
	}else{
		printf("khong co ngay nay trong thang mon= %d",mon);
		
		
	}


 //   thu=ngay %7;
    
   // switch(thu){
    	
    //	case(0):
    //		printf("day: %d \nmon: %d \nla thu: %d ",day,mon,thu);
    //	break;
    	}
	
	
	
	
