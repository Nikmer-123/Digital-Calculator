#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void dec_hex(long int num){
	long int rem[50],i=0,len=0;
	while(num>0){
		rem[i]=num%16;
		num=num/16;
		i++;
		len++;
		
	}
	printf("\n hexadecimal number is");
	for(i=len-1;i>=0;i--){
		if(rem[i]==10){
			printf("A");
		}
		else if(rem[i]==11){
			printf("B");
		}
		else if(rem[i]==12){
			printf("C");
		}
		else if(rem[i]==13){
			printf("D");
			
		}
		else if(rem[i]==14){
			printf("E");
		}
		else if(rem[i]==15){
			printf("F");
		}
		else {
			printf("%d",rem[i]);
		}
	}
}
void dec_bin(long int num){
	long int rem[50],i=0,len=0;
	while(num>0){
		rem[i]=num%2;
		num=num/2;
		i++;
		len++;
	}
	printf("\n binary number is");
	for(i=len-1;i>=0;i--){
		printf("%d",rem[i]);
		
	}
}
void dec_oct(long int num){
	long int rem[50],i=0,len=0;
	while(num>0){
		rem[i]=num%8;
		num=num/8;
		i++;
		len++;
		
	}
	printf("\n octal number is");
	for(i=len-1;i>=0;i--){
		printf("%d",rem[i]);
	}
}
void bin_dec(long int n){
	long int dec=0,i=0,rem=0;
	while(n>0){
		rem=n%10;
		n=n/10;
		dec=dec+rem*pow(2,i);
		i++;
	}
	printf("\n decimal number is=%d",dec);
	
}
void oct_dec(long int f){
	long int dec=0,i=0,rem=0;
	while(f>0){
		rem=f%10;
		f=f/10;
		dec=dec+rem*pow(8,i);
		i++;
		
	}
	printf("\n decimal number is =%d",dec);
}
void fbin_dec(){
	double ans,bin,fr,fn=0.0,a;
	 int sum=0,dec,i=0,rem=0,b,j=1;
	printf("\nenter the binary number");
	scanf("%lf",&bin);
	dec=bin;
	fr=bin-dec;
	while(dec>0){
		rem=dec%10;
		dec=dec/10;
		sum=sum+rem*pow(1,i);
		i++;
		
	
}
printf("the decimal number is %d",sum);
		while(fr!=0.0){
			a=10*fr;
			b=a;
			fn=fn+(b*(1/pow(2,j)));
			
			fr=a-b;
			j++;
		}
		ans=sum+fn;
		printf("\n the decimal number is %lf",ans);
	
}
void fdec_bin(){
      double z,doub,r,n,count=0,fr;
      int num,p,i=0;
      long int rem[50];
      printf("\nenter the decimal number");
      scanf("%lf",&doub);
      num=doub;
      fr=doub-num;
      while(num!=0){
      	rem[i]=num%2;
      	num=num/2;
      	i++;
      	count++;
	  }
	  printf("\nthe binary number is");
	  for(i=(count-1);i>=0;i--){
	  	printf("%d",rem[i]);
	  }
	  printf(".");
	  while(fr!=0){
	  	z=fr*2;
	  	p=z;
	  	fr=z-p;
	  	printf("%d",p);
	  }
}
void hex_dec(){
	char hex[20];
	long long dec,pos;
	int i=0,v,l;
	dec=0;
	pos=1;
	printf("\nenter hexadecimal number");
	scanf("%s",hex);
	l=strlen(hex);
	l--;
	for(i=0;hex[i]!='\0';i++){
		if(hex[i]>='0'&&hex[i]<='9'){
			v=hex[i]-48;
		}
		else if(hex[i]>='a'&&hex[i]<='f'){
			v=hex[i]-97+10;
		}
		else if(hex[i]>='A'&&hex[i]<='F'){
			v=hex[i]-65+10;
		}
		dec=dec+v*pow(16,l);
		l--;
	}
	printf("decimal number is %lld",dec);
}
void oct_bin(){
	char octnum[50];
	long i=0;
	int n;
	printf("enter the size");
	scanf("%d",&n);
	printf("\nenter octal number");
	scanf("%s",octnum);
	printf("\nbinary number is");
	while(octnum[i]&&i<n){
		switch(octnum[i]){
			case '0':
				printf("000");
				break;
				case '1':
					printf("001");
					break;
					case '2':
						printf("010");
						break;
						case '3':
							printf("011");
							break;
							case '4':
								printf("100");
								break;
								case '5':
									printf("101");
									break;
									case '6':
										printf("110");
										break;
										case '7':
											printf("111");
											break;
											default:
												printf("invalid");
												break;
		}
		i++;
	}
}
void hex_bin(){
	char bin[50],hex[50];
	long int i=0,n;
	printf("enter the size");
	scanf("%d",&n);
	printf("\nenter hexadecimal number");
	scanf("%s",hex);
	while(hex[i]&&i<n){
		switch(hex[i]){
			case '0':
				printf("0000");
				break;
		case '1':
		printf("0001");
		break;
		case '2':
		printf("0010");
		break;
		case '3':
		printf("0011");
		break;
		case '4':
		printf("0100");
		break;
		case '5':
		printf("0101");
		break;
		case '6':
		printf("0110");
		break;
		case '7':
		printf("0111");
		break;
		case '8':
		printf("1000");
		break;
		case '9':
		printf("1001");
		break;
		case 'A':
		printf("1010");
		break;
		case 'B':
		printf("1011");
		break;
		case 'C':
		printf("1100");
		break;
		case 'D':
		printf("1101");
		break;
		case 'E':
		printf("1110");
		break;
		case 'F':
		printf("1111");
		break;		
		default:
			printf("invalid");
			break;
		}i++;
	}
	
}
void bin_oct(){
	long int bin,sum=0,rem=0,j=0,oct=0,r=0;
	printf("\nenter the binary number");
	scanf("%d",&bin);
	while(bin!=0){
		rem=bin%10;
		
		sum=sum+rem*pow(2,j);
		j++;
		bin=bin/10;
	}j=1;
	while(sum!=0){
		r=sum%8;
		oct=oct+r*j;
		sum=sum/8;
		j=j*10;
	}
	printf("\nthe octal number is%d",oct);
}
void bin_hex(){
	long int dec=0,i=0,bin,rem=0,r[50],j=0,len=0;
	printf("\nenter the binary number");
	scanf("%d",&bin);
	while(bin>0){
		rem=bin%10;
		bin=bin/10;
		dec=dec+rem*pow(2,i);
		i++;
	}
	printf("\ndecimal number is%d",dec);
	while(dec>0){
		r[j]=dec%16;
		dec=dec/16;
		j++;
		len++;
	}
	printf("\nhexadecimal number is");
	for(j=len-1;j>=0;j--){
			if(r[j]==10){
			printf("A");
		}
		else if(r[j]==11){
			printf("B");
		}
		else if(r[j]==12){
			printf("C");
		}
		else if(r[j]==13){
			printf("D");
			
		}
		else if(r[j]==14){
			printf("E");
		}
		else if(r[j]==15){
			printf("F");
		}
		else {
			printf("%d",r[j]);
		}

}
}
void foct_dec(){
	double z,doub,r,n,fr,fn=0.0,ans;
	int num,p,i=0,dec=0,rem=0,j=1;
	printf("\nenter the octal number");
	scanf("%lf",&doub);
	num=doub;
	fr=doub-num;
	while(num>0){
		rem=num%10;
		num=num/10;
		dec=dec+rem*pow(8,i);
		i++;
	}
	printf(".");
	while(fr!=0){
		z=fr*10;
		
		p=z;
		fn=fn+(p*(1/pow(8,j)));
		
		fr=z-p;
		j++;
		
	}
	ans=dec+fn;
	printf("\ndecimal number is %lf",ans);	
	
}
void fdec_oct(){
	double z,doub,r,n,count=0,fr;
	int num,p,i=0;
	long int rem[50];
	printf("\nenter the decimal number");
	scanf("%lf",&doub);
	num=doub;
	fr=doub-num;
	while(num!=0){
		rem[i]=num%8;
		num=num/8;
		i++;
		count++;
	}
	printf("\nthe octal number is");
	for(i=(count-1);i>=0;i--){
		printf("%d",rem[i]);
	}
	printf(".");
	while(fr!=0){
		z=fr*8;
		p=z;
		fr=z-p;
		printf("%d",p);
		
	}
}
void fbin_oct(){
	long int sum=0,rem=0,j=0,oct=0,r=0,o,b,i=1;
	double bin,fr,fn=0.0,a;
	
	printf("\nenter the binary number");
	scanf("%lf",&bin);
	o=bin;
	fr=bin-o;
	
	while(o!=0){
		rem=o%10;
		
		sum=sum+rem*pow(2,j);
		j++;
		o=o/10;
	}j=1;
	while(sum!=0){
		r=sum%8;
		oct=oct+r*j;
		sum=sum/8;
		j=j*10;
	}
	printf("\nthe octal number is%d",oct);
	printf(".");
	while(fr!=0){
		fr=10*fr;
		a=8*fr;
		b=a;
		fr=a-b;

	printf("%d",b);
}
}






int main(){
    long int num,n,f;
    int ch;

	
    printf("\nenter 1 for binary to decimal conversion");
    printf("\nenter 2 for binary to hexadecimal conversion");
    printf("\nenter 3 for binary to octal conversion");
    printf("\nenter 4 for decimal to binary conversion");
    printf("\nenter 5 for decimal to hexadecimal conversion");
    printf("\nenter 6 for decimal to octal conversion");
    printf("\nenter 7 for fraction binary to decimal fraction conversion");
    printf("\nenter 8 for fraction binary to octal fraction conversion");
    printf("\nenter 9 for fraction decimal to binary fraction conversion");
    printf("\nenter 10 for fraction decimal to octal fraction conversion");
    printf("\nenter 11 for fraction octal to binary fraction conversion");
    printf("\nenter 12 for fraction octal to decimal fraction conversion");
    printf("\nenter 13 for hexadecimal to binary conversion");
    printf("\nenter 14 for hexadecimal to decimal conversion");
    printf("\nenter 15 for octal to binary conversion");
    printf("\nenter 16 for octal to decimal conversion");
do{

	
    printf("\nenter your choice");
    scanf("%d",&ch);
    switch(ch){
    	case 1: 
    	printf("\nenter the binary number");
    	scanf("%d",&n);
    	bin_dec(n);
    	break;
    	case 2:
    	bin_hex();
		break;
		case 3:
		bin_oct();
		break;	
		case 4:
		printf("\nenter the decimal number");
		scanf("%d",&num);
		dec_bin(num);
		break;	
    	case 5:
    	printf("\nenter the decimal number");
		scanf("%d",&num);
		dec_hex(num);
		break;	
		case 6:
		printf("\nenter the decimal number");
		scanf("%d",&num);
		dec_oct(num);
		break;
		case 7:
		fbin_dec();
		break;
		case 8:
		fbin_oct();
		break;
		case 9:
		fdec_bin();
		break;
		case 10:
		fdec_oct();
		break;
		//case 11:
		//foct_bin();
		break;
		case 12:
		foct_dec();
		break;
		case 13:
		hex_bin();
		break;
		case 14:
		hex_dec();
		break;
		case 15:
		oct_bin();
		break;
		case 16:
		printf("\nenter the octal number");
		scanf("%d",&f);
		oct_dec(f);
}
	}while(ch!=0);

	
	return 0;
}
