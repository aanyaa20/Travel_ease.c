#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int k = 0;
char type[60], place[100], date[20];
int u1=0;
int heading(){
    printf("#################welcome to TRAVEL EASE####################\n");
    printf("*************customer's comfort and quality is our first priority*************\n");
    printf("**************we provide best national as well as international packages****************\n");
    printf("packages are in variety and are pocket friendly\n");
    printf("our package includes meal and transportation charges only ");
    printf("we also provide hotel facility at optium charges");
   printf("enter 1 for further details of package and information and 0 to quit\n");
   int a; 
   scanf("%d",&a);
         return a;}
float india()
{
    system("cls");
    strcpy(type,"INDIAN TOUR PACKAGE\n");
    printf("\t\t\t1. Kashmir tour package\n");
    printf("#flower valley tour\n");
    printf("# shikara ride on dal lake\n");
    printf("#shankaracharya hill tour\n");
    printf("#srinagar city tour\n");
    printf("#gulmarg gondola exploration\n");
    printf("\t\t\t2.ladakh tour package\n");
    printf("#tour to leh palace\n");
    printf("#tour to hemis national park\n");
    printf("#tour to khardung la\n");
    printf("#tour to pangong tso\n");
    printf("#tour to shanti stupa and thiskey monastery\n");
    printf("\t\t\t3.shimla and manali package\n");
    printf("#tour to kufri\n");
    printf("#tour  to chadwick falls\n");
    printf("#tour to christ church, jhaku hills,hanuman mandir and mall road\n");
    printf("#tour to rohtang pass\n");
    printf("#tour to manikaran sahib,solang valley and old manali\n");
    printf("\t\t\t4.amritsar and chandigarh package\n");
    printf("#tour to golden temple\n");
    printf("#tour to jallianwala bagh\n");
    printf("# wagah border ceremony\n");
    printf("# tour to sukhna lake\n");
    printf("#tour to zakir husain rose garder and rock garden\n");
    printf("\t\t\t5.Char dham yatra along with visit to rishikesh and haridwar\n");
    printf("#tour to harki paudi,daksh temple\n");
    printf("#tour to ram jhula,laxman jhula and parmarth niketan\n");
    printf("#tour to dehradoon and mussorie\n");
    printf("#tour to kedarnath , badrinath\n");
    printf("#tour to gangotri and yamunotri\n");
    printf("\t\t\t6.Varanasi, lucknow ,Ayodhya and chitrakoot holy place visit\n");
    printf("#ganga arti at dasaswamedh ghat\n");
    printf("#tour to assi ghat, annapurna temple,shri kashi vishwanath corridor\n");
    printf("#tour to anciet city of sarnath\n");
    printf("#tour to hanuman garhi,janambhoomi,kanak bhavan and saryu arti at ayodhya\n");
    printf("\t\t\t7.Agra and mathura package\n");
    printf("#tour to taj mahal\n");
    printf("#tour to red fort\n");
    printf("#tour to vrindavan\n");
    printf("#tour to barsana, gokul\n" );
    printf("#mathura city tour and visit to government museum\n");
    printf("\t\t\t8. jaipur,ajmer and ranthambore package\n");
    printf("#tour to hawa mahal\n");
    printf("#tour to city palace and albert hall mueseum\n");
    printf("#tour to ajmer fort,adhai din ka jhonpra\n");
    printf("#tour to ana sagar lake and foy sagar lake\n");
    printf("#tour to ranthambore national park");
    printf("\t\t\t9.kanha tiger reserve,bhopal,gwalior package\n");
    printf("#tour to kanha tiger reserve\n");
    printf("#tour to sanchi stupa,upper lake\n");
    printf("#tour to birla mueseum and udaygiri caves\n");
    printf("#tour to gwalior fort\n");
    printf("#tour to bandhavgarh national park, jai villas palace\n");
    printf("\t\t\t10.northeast tour \n");
    printf("#tour to kaziranga national park\n");
    printf("# city tour of shillong\n");
    printf("#city tour of gangtok\n");
    printf("#tour to cheerapunji waterfall\n");
    printf("#tour to city mawsynram\n");
    printf("   11.ahmedabad,kutch and gir national park package\n");
    printf("#tour to sabarmati ashram\n");
    printf("#tour to sabarmati river front\n");
    printf("#tour to kankaria talab and ahmedabad science city\n");
    printf("#tour to rann of kutch\n");
    printf("#tour to gir natinal forest\n");
    printf("\t\t\t12.Mumbai,pune and Mahabaleshwar package\n");
    printf("# tour to elephanta caves\n");
    printf("#tour to shri siddhivinayak temple\n");
    printf("#tour to hanging garden,juhu beachand gateway of India \n");
    printf("#tour to vichitragad\n");
    printf("#tour to elphinstone point, pratapgad fort \n");
    printf("\t\t\t13. Bengaluru,dandeli,Hampi and Nagarhole package\n");
    printf("# tour to lalbagh botanical garden\n");
    printf("#tour to bengaluru palace and cubbon park\n");
    printf("#tour to bannerghata national park\n");
    printf("#tour to group of monuments\n");
    printf("#tour to iruppu falls\n");
    printf("\t\t\t14.patna ,bodh gaya and nalanda package\n");
    printf("#tour to golghar\n");
    printf("#tour to takhat sri harimandir ji 'patna sahib'\n");
    printf("#tour to sanjay gandhi biological park,eco park \n");
    printf("#tour to mahabodhi temple\n");
    printf("#tour to nalanda university\n");
    printf("\t\t\t15.raipur ,bilaspur,jagdalpur and dantewada  package\n");
    printf("# tour to ghatarani waterfalls\n");
    printf("# tour to mm fun city\n");
    printf("# nandan van zoo and safari\n");
    printf("#tour to achanakama\n");
    printf("#tour to kanger ghati national park\n");
    printf("\t\t\t16.ranchi,deoghar and dhanbad package\n");
    printf("#tour to dassam falls\n");
    printf("#tour to patratu valley\n");
    printf("#tour to birsa zoological park\n");
    printf("#holy visit to baidyanath temple\n");
    printf(" tour to birsa munda park\n");
    printf("\t\t\t17.goa package,we provide 10% off on this package\n");
    printf("#tour to dudhsagar falls\n");
    printf("#tour to palolem beach \n");
    printf("#tour to Indian naval aviation museum\n");
    printf("#tour to basilica of bom jesus\n");
    printf("#tour to aguada fort\n");
    printf("\t\t\t18.Munnar,Alappuzha,Thiruvanathapuram,kovlam package\n");
    printf("#tour to eravikulam national park\n");
    printf("#tour to attukad waterfalls\n");
    printf("#tour to alappuzha beach\n");
    printf("#visit to magic planet\n");
    printf("#visit to lighthouse beach,kovalam beach\n");
    printf("\t\t\t19.chennai,ooty,rameshwar and kanyakumari package\n");
    printf("# tour to government museum chennai\n ");
    printf("#tour to marina beach and guindy national park\n");
    printf("#exploration of nilgiri mountain railway line\n");
    printf("# tour to rameshwaram temple\n");
    printf("#tour to vivekananda rock memorial\n");
    printf("\t\t\t20.SPECIAL HOLY PACKAGE '12 JYOTIRLINGA YATRA' , we provide 50% discount on this package\n");
    printf("#tour to Somnath ,Malikarjun,Mahakaleshwar\n");
    printf("#tour to omkareshwar,kedarnath,bhimashankar\n");
    printf("#tour to vishwanath,triyambkeshwar,vaidyanath\n");
    printf("#tour to nageshwar, rameshwar and grihenshwar\n");
    printf("enter your choice as the serial number of given package\n");
    int ch;
    scanf("%d",&ch);
    if(ch==1){
            strcpy(place,"kashmir package");
        return 6000;
        }
    else if(ch==2){
        strcpy(place,"ladakh package");
        return 6500;}
   else if(ch==3){
        strcpy(place,"shimla and manali package");
        return 5500;}
        else if(ch==4){
                strcpy(place,"amritsar and chandigarh package");
            return 5000;}
        else if(ch==5){
                strcpy(place,"chardham package");
            return 10000;}
        else if(ch==6){
                strcpy(place,"varanasi,lucknow,ayodhya,chitrakoot package");
            return 7000;}
        else if(ch==7){
            strcpy(place,"agra and mathura package");
            return 6250;}
        else if(ch==8){
                strcpy(place,"jaipur and ajmer package");
            return 11000;}
        else if(ch==9){
                strcpy(place,"bhopal and gwalior package");
            return 9500;}
        else if(ch==10){
                strcpy(place,"north east package");
            return 15000;}
        else if(ch==11){
                strcpy(place,"ahmedabad and kutch package");
            return 8000;}
        else if(ch==12){
                strcpy(place,"mumbai and pune package");
            return 10250;}
        else if(ch==13){
                strcpy(place,"bengaluru and dandeli package");
            return 8250;}
        else if(ch==14){
                strcpy(place,"patna and bodh gaya package");
            return 4250;}
        else if(ch==15){
                strcpy(place,"raipur and bilaspur package");
            return 5250;}
        else if(ch==16){
                strcpy(place,"ranchi and deoghar package");
            return 7250;}
        else if(ch==17){
                strcpy(place,"goa package");
        return (10.0*18000);
        }
        else if(ch==18){
                strcpy(place,"munnar and alappuzha package");
            return(20000);}
        else if(ch==19){
                strcpy(place,"chennai,ootyand rameshwar package");
            return(18500);}
        else{
            strcpy(place,"special holy package");
            return((50.0*80000)/100);}
}
float intracontinental()
{
    system("cls");
    strcpy(type,"Intracontinental package\n");
    printf("1.south korea tour package\n");
    printf("-tour to seoraksan national park\n");
    printf("-tour to donggung palace\n");
    printf("-tour to iconic yonggungsa temple\n");
    printf("-tour to cheonjiyeon waterfall\n");
    printf("-suncheon bay visit\n");
    printf("2.japan tour package\n");
    printf("- mount fuji tour\n");
    printf("-tour to cherry blossoms\n");
    printf("-tour to geishas\n");
    printf("-tour to shibuya crossing,blue pond\n");
    printf("-tour to onsens\n");
    printf("3.indonesia tour package\n");
    printf("-tour to gili islands\n");
    printf("-tour to raja ampat islands\n");
    printf("-tour to maluk beach\n");
    printf("-tour to kelimutu lake\n");
    printf("-tour to bunaken marine park\n");
    printf("4.thailand tour package\n");
    printf("-tour to chiang mai\n");
    printf("-tour to bangkok\n");
    printf("-tour to ko khao phing kan\n");
    printf("-tour to phuket\n ");
    printf("-tour to ko phangan\n");
    printf("5.vietnam tour package\n");
    printf("-sapa tour \n");
    printf("-tour to halong bay\n");
    printf("-tour to lan ha bay\n");
    printf("-ninh binh tour\n");
    printf("tour to phong nha\n");
    printf("6.hong kong tour package\n");
    printf("-tour to victoria peak\n");
    printf("-tour to ocean park\n");
    printf("-tour to disney land\n");
    printf("-tour to victoria harbour\n");
    printf("-tour to star ferry\n");
    printf("7.maldives tour package\n");
    printf("-como cocoa island tour \n");
    printf("- baros island tour\n");
    printf("-emboodhu finolhu island tour\n");
    printf("-mihiri island tour\n");
    printf("-male island tour\n");
    printf("8.nepal tour package\n");
    printf("-rara lake tour\n");
    printf("-panch pokhari tour\n");
    printf("-chitwan national park tour\n");
    printf("-garden of dreams tour\n");
    printf("-everest base camp tour\n");
    printf("9.Sri lanka tour package\n");
    printf("-ella-witness the countryside chram tour\n");
    printf("-nuwara eliya tour\n");
    printf("-pinnawala elephant orphanage tour\n");
    printf("-adams peak tour\n");
    printf("-mirissa and polonnaruwa tour\n");
    printf("10.Russia tour\n");
    printf("Altai mountains tour\n");
    printf("zapovednik nature reserve tour\n");
    printf("lake onega and kizhi island tour\n");
    printf("tour to valley of geysers\n");
    printf("tour tosolovki islands\n");
    printf("enter your choice as the serial number of package provided\n");
    int ch1;
    scanf("%d",&ch1);
    if(ch1==1){
            strcpy(place,"soth korea package");
        return 100000;}
    else if(ch1==2){
            strcpy(place,"japan package");
        return 180000;}
    else if(ch1==3){
            strcpy(place,"indonesia package");
        return 150000;}
    else if(ch1==4){
            strcpy(place,"thailand package");
        return 130000;}
    else if(ch1==5){
            strcpy(place,"vietnam package");
        return 125000;}
    else if(ch1==6){
            strcpy(place,"hong kong package");
        return 200000;}
    else if(ch1==7){
            strcpy(place,"maldives package");
        return 135000;}
    else if(ch1==8){
            strcpy(place,"nepal package");
        return 90000;}
    else if(ch1==9){
            strcpy(place,"sri lanka package");
        return 80000;}
    else{
            strcpy(place,"russia package");
        return 500000;}
    }
    float intercontinental()
    {
        system("cls");
        strcpy(type,"intercontinental package\n");
        printf("1. england tour package\n");
        printf("- stonehenge tour\n");
        printf("-tour to tower of london\n");
        printf("-tour to the roman baths and georgian city bath\n");
        printf("-tour to british mueseum\n");
        printf("-tour to york minister and and historic yorkshire\n");
        printf("2.australia tour package\n");
        printf("-tour to sydney opera house,new soth wales\n");
        printf("-tour to great barrier, reef marine park and queensland\n");
        printf("-tour to uluru kata tjuta  national park\n");
        printf("-tour to sydney harbour bridge\n");
        printf("-tour to blue mountains natinal park\n");
        printf("3. united states of america tour package\n");
        printf("-tour to grand canyon\n");
        printf("-tour to nigara falls\n");
        printf("-tour to statue of liberty\n");
        printf("-tour to white house\n");
        printf("-tour to walt disney world resort\n");
        printf("4. france tour package\n");
        printf("-tour to eiffel tower\n");
        printf("-tour to musee du louvre\n");
        printf("-tour to chateau de versailles\n");
        printf("-tour to cote d'Azur\n");
        printf("-tour to mont saint michel\n");
        printf("5. netherlands tour package\n");
        printf("- tour to amsterdam \n");
        printf("-tour to maastricht\n");
        printf("-tour to rotterdam\n");
        printf("-tour to de hoge veluwe national park\n");
        printf("-tour to alkmaar cheese market\n");
        printf("6. canada tour package\n");
        printf("-banff national park tour\n");
        printf("-toronto's cn tower tour\n");
        printf("-tour to old quebec\n");
        printf("-tour to whistler\n");
        printf("-tour to ottawa's parliament hill\n");
        printf("7.africa tour package\n");
        printf("-okavango delta tour\n");
        printf("-victoria falls tour\n");
        printf("-omo river region visit\n");
        printf("-mount kilimanjaro tour\n");
        printf("-tour to masai mara national reserve\n");
        printf("8.new zealand tour package\n");
        printf("- tour to bay of islands\n");
        printf("- tongariro national park tour\n");
        printf("-rotorua tour \n");
        printf("- tour to napier in hawke's bay\n");
        printf("- tour to auckland\n");
        printf("9. germany tour package\n");
        printf("-berlin brandenburg gate tour\n");
        printf("-colonge cathedral tour\n");
        printf("-black forest tour\n");
        printf("-the ultimate fairy tale castle tour\n");
        printf("-miniatur wunderland and tour to historic part of hamburg\n");
        printf("10.italy tour package\n");
        printf("- colosseum tour \n");
        printf("-florence duomo santa maria del fiore tour\n");
        printf("-the grand canal of venice tour\n");
        printf("-leaning tower of pisa tour\n");
        printf("-vatican city tour\n");
        printf(" enter your choice as the serial  number of the package\n");
        int ch2;
        scanf("%d",&ch2);
        if(ch2==1){
                strcpy(place,"england package");
         return 500000;}
        else if(ch2==2){
                strcpy(place,"australia package");
            return 450000;}
        else if(ch2==3){
                strcpy(place,"usa package");
            return 1000000;}
        else if(ch2==4){
                strcpy(place,"france package");
            return 800000;}
        else if(ch2==5){
                strcpy(place,"netherlands package");
            return 400000;}
        else if(ch2==6){
                strcpy(place,"canada package");
            return 700000;}
        else if(ch2==7){
                strcpy(place,"africa package");
            return 650000;}
        else if(ch2==8){
                strcpy(place,"new zealand package");
            return 750000;}
        else if(ch2==9){
                strcpy(place,"germany package");
            return 900000;}
        else{
                strcpy(place,"italy package");
            return 950000;}
    }
    int hotelmenu()
    {
        printf ("Types of room available are as follows\n");
        printf("1.\t\t\t\t\t\t\t\t\t\tSUPER DELUXE ROOM\t\t\t\t\t\t\t\n");
        printf("accessoris available:   1.1-Queen sized bed\n");
        printf("1.2-Spectacular view\n");
        printf("1.3-Special attention from hotel staff\n");
        printf("1.4-cozy sofa seating\n");
        printf("1.5-nicely placed cushions and pillows\n");
        printf("1.6-full sized  working desk with chair\n");
        printf("1.7-free wifi\n");
        printf("1.8-32 inch LCD TV.\n");
        printf("1.9- 24 hours running hot & cold water for relaxing bath\n");
        printf("1.10-air conditioning is set up to make your sleep comfortable\n");
        printf("1.11-Tea and Coffee making facilities\n");
        printf("1.12-telephone and refrigerator\n");
        printf("2.\t\t\t\t\t\t\t\t\t\tDELUXE ROOM\t\t\t\t\t\t\n");
        printf("2.1 feather bed with imported italian 400 thread count linens\n");
        printf("2.2 mini refrigerator\n");
        printf("2.3 flat screen TV and DVD player\n");
        printf("2.4 Sofa come bed\n");
        printf("2.5 balcony\n");
        printf("2.6 embroidered chairs and custom furnitures\n");
        printf("2.7 access to free wifi\n");
        printf("2.8 tea and coffee maker\n");
        printf("2.9 accompanied with air conditioner\n");
        printf("2.10 personal toilet with free toiletries\n ");
        printf("2.11 korean sinks set in avanity made from St. laurent marble\n");
        printf("2.12 shower with hot and cold water\n");
        printf("\t\t\t\t\t\t\t\t\t\t 3-CABANAS\t\t\t\t\t\t");
        printf("3.1 king sized bed\n");
        printf("3.2 jacuzzi\n");
        printf("3.3 minibar\n");
        printf("3.4 balcony lanai, or terrace among others\n");
        printf("3.5 bathtub and shower with 24 hrs. hot and cold water\n");
        printf("3.6 bathrobes and slippers\n");
        printf("3.7 pull out couch\n");
        printf("3.8 Buisness centre\n");
        printf("3.9 Hair dryer\n");
        printf("3.10 make up/shaving mirror,bathroom telephone");
        printf("3.11 free wifi along with 23 inch LED TV\n");
        printf("3.12 Personal kitchen and master bathroom\n");
        printf("\t\t\t\t\t\t\t\t\t\t4-VILLA\t\t\t\t\t\t\n");
        printf("4.1 A perfect swimming pool\n");
        printf("4.2 Spacious living room\n");
        printf("4.3 Gorgeously furnished dinning room\n");
        printf("4.4 Wholly equipped modern kitchens \n");
        printf("4.5 State of the art entertainment system\n");
        printf("4.6 fast and reliable internet connection\n");
        printf("4.7 Balcony with natural view\n");
        printf("4.8 several bedrooms \n");
        printf("4.9 fireplace \n");
        printf("4.10 gaming areas\n");
        printf("4.11 free lounge area with additional working areas\n");
        printf("4.12 some offer butlers to help you in unpacking and packing of  your things\n");
        printf(" please enter the 1 to book super deluxe room\n");
        printf("please enter 2 to book deluxe room \n");
        printf("please enter 3 to book cabanas \n");
        printf("please enter 4 to boook villa\n");
        printf("enter your choice");
        int p;
        scanf("%d",&p);
        return p;
    }
    int billing ()
    {
        int p1=hotelmenu();
        int p2=p1,nd,amt=0;
        switch(p2)
        {
        case 1:
            printf("you have choosed super deluxe room\n");
            printf("enter no.of days\n");
            scanf("%d",&nd);
            if(nd==1)
            amt=5500;
            else if(nd>1&&nd<=3)
                amt=5500+5000*(nd-1);
                else if(nd>3&&nd<=7)
                amt=5500+5000*(2)+4800*(nd-3);
                else
                    amt=5500+5000*(2)+4800*(4)+4000*(nd-7);
                break;
        case 2:
            printf("you have choosed deluxe room\n");
            printf("enter no. of days\n");
            scanf("%d",&nd);
            if(nd==1)
                amt=4500;
            else if(nd>1&&nd<=3)
                    amt=4500+4000*(nd-1);
                    else if(nd>3&&nd<=7)
                        amt=4500+4000*(2)+3800*(nd-3);
            else
                amt=4500+4000*(2)+3800*(4)+3000*(nd-7);
            break;
        case 3:
            printf("you have choosed cabanas\n");
            printf("enter no.of days\n");
            scanf("%d",&nd);
            if(nd==1)
                amt=8000;
            else if(nd>1&&nd<=3)
                amt=8000+7500*(nd-1);
            else if(nd>3&&nd<=7)
                amt=8000+7500*2+7300*(nd-3);
            else
                amt=8000+7500*2+7300*4+7000*(nd-7);
                    break;
        case 4:
            printf("you have choosed villa\n");
            printf("enter no. of days\n");
            scanf("%d",&nd);
            if(nd==1)
                amt=20000;
            else if(nd>1&&nd<=3)
                amt=20000+15000*(nd-1);
            else if(nd>3&&nd<=7)
                amt=20000+15000*2+13000*(nd-3);
            else
                amt=20000+15000*2+13000*4+10000*(nd-7);
            break;
        default:
            printf("you have made a wrong choice\n");
        }
        int tl;
        tl=amt*k;
        printf("total amount to be paid for hotel stay %d",tl);
        return tl;
    }
    void calculatebill(int pm,int mm)
    {float hm;
        hm= (float)(pm+mm);
        float cgst , sgst;
        cgst=(10.0*hm)/100.0;
        sgst=(10.0*hm)/100.0;
        printf("please enter the month number  in which you will be travelling\n");
        printf("enter 1 for january\n");
        printf("enter 2 for febraury\n");
        printf("enter 3 for march\n");
        printf("enter 4 for april\n");
        printf("enter 5 for may\n");
        printf("enter 6 for june\n");
        printf("enter 7 for july\n");
        printf("enter 8 for august\n");
        printf("enter 9 for september\n");
        printf("enter 10 for october\n");
        printf("enter 11 for november\n");
        printf("enter 12 for december\n");
        printf("enter your choice\n");
        int m,d;
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            printf("CONGRATS YOU GOT NEW YEAR DISCOUNT(10%%) ON TOTAL AMOUNT\n");
            d=10;
            break;
        case 2:
            printf("CONGRATS YOU GOT VALENTINE'S DAY DISCOUNT(8%%) ON TOTAL AMOUNT\n");
            d=8;
            break;
        case 3:
            printf("CONGRATS YOU GOT HOLI FESTIVAL DISCOUNT(15%%)ON TOTAL AMOUNT\n");
            d=15;
            break;
        case 4:
            printf("CONGRATS YOU GOT NAVARATRI (6%%) DISCOUNT ON TOTAL AMOUNT\n");
            d=6;
            break;
        case 5:
            printf("CONGRATS YOU GOT THRISSUR POORAM (5%%) DISCOUNT ON TOTAL AMOUNT \n");
            d=5;
            break;
        case 6:
            printf("CONGRATS YOU GOT HEMIS (7%%) DISCOUNT ON TOTAL AMOUNT \n");
            d=7;
            break;
        case 7:
            printf("CONGRATS YOU GOT MOONSON DISCOUNT (12%%) ON TOTAL AMOUNT \n");
            d=12;
            break;
        case 8:
            printf("CONGRATS YOU GOT INDEPENDENCE DAY DISCOUNT(15%%) ON TOTAL AMOUNT \n");
            d=15;
            break;
        case 9:
            printf("CONGRATS YOU GOT AN ORDINARY DISCOUNT (3%%) ON TOTAL AMOUNT\n");
            d=3;
            break;
        case 10:
            printf("CONGRATS YOU GOT DUSSEHRA FESTIVAL DISCUNT (9%%) ON TOTAL AMOUNT\n");
            d=9;
            break;
        case 11:
            printf("CONGRATS YOU GOT SPECIAL DIWALI DISCOUNT (20%%) ON TOTAL AMOUNT\n");
            d=20;
            break;
        case 12:
            printf("CONGRATS YOU GOT CHRISTMAS DISCOUNT(12%%) ON TOTAL AMOUNT\n");
            d=12;
            break;
        default:
            printf("you have entered wrong month number");
        }
        printf("total amount including including hotel stay and trip =%f Rs.\n",hm);
        printf("CGST TO BE PAID %f Rs.\n",cgst);
        printf("SGST TO BE PAID %f Rs.\n",sgst);
        float discount=(d*(hm+cgst+sgst))/100.0;
        printf("discount you got %f Rs.\n",discount);
        printf("net amount to be paid = %f\n",(hm+cgst+sgst-discount)); }
 void pay(){
    int pay_method;
    int BankOTP;
    int NameOfBank;
	char BankName[20];
	char NetBankingLoginId;
	char NetBankingPassword;
    char UPI_ID[15];
    double Card_Number;
	char Card_Holder_Name[10];
	int ExpMonth;
	int ExpMonth_Verfiy;
	int ExpYear;
	int ExpYear_Verfiy;
	int Card_CVV;
	int Card_CVV_Verfiy;
    printf("Select the Payment method from following\n");
	printf("1. Netbanking\n2. UPI\n3. Debit/Credit Card\n");
	scanf("%d", &pay_method);
    switch (pay_method){
    case 1:
    printf("Select from Following Banks\n");
	printf("1. State Bank Of India\n2. HDFC\n3. ICICI\n4. Cannar Bank\n5. Yes Bank\n6. Other\n");
	scanf("%d", &NameOfBank);
    if (NameOfBank == 6){
    printf("Enter your Bank Name\n");
	scanf("%s", &BankName);
    printf("Enter Your Login Id\n");
	scanf("%s", &NetBankingLoginId);
    printf("Enter Your Passward\n");
	scanf("%s", &NetBankingPassword);
    printf("Your OTP is 1234\n");
    while (1){
    scanf("%d", &BankOTP);
	if (BankOTP == 1234){
    printf("Your Payment is in Process\n");
	printf("Your Payment is Succesful\n");
	break;
	}

else{

	printf("you have Enter wrong OTP\n");
	printf("Renter the OTP\n");
	}
	}

	break;
	}


	else{

	printf("Enter Your Login Id\n");
	scanf("%s", &NetBankingLoginId);

	printf("Enter Your Passward\n");
	scanf("%s", &NetBankingPassword);

	printf("Your OTP is 1234\n");

	
	while (1){

	scanf("%d", &BankOTP);

	if (BankOTP == 1234){

	printf("Your Payment is in Process\n");
	printf("Your Payment is Succesful\n");
	break;
	}

	else{

	printf("you have Enter wrong OTP\n");
	printf("Renter the OTP\n");
	}
	}
	break;
	}

	
	case 2:

	printf("Enter your UPI Id\n");
	scanf("%s", &UPI_ID);

	printf("Your Payment is in Process\n");
	printf("Your Payment is Succesful\n");

	break;

	
	case 3:

	printf("Enter your card number\n");
	scanf("%lf", &Card_Number);
	

	printf("Enter your name\n");
	scanf("%s", &Card_Holder_Name);

	printf("Enter your Card exp month\n");
	scanf("%d", &ExpMonth);

	
	if (ExpMonth <= 12){

	ExpMonth = ExpMonth * 10;

	for (int i = 1; i <= 3; i++){

	ExpMonth_Verfiy = ExpMonth % 10;
	}

	if (ExpMonth_Verfiy == 0){

	}

	else{

	printf("Your Entered Exp Month is wrong\n");
	break;
	}
	}

	else{

	printf("Your Entered Exp Month is wrong\n");
	break;
	}

	printf("Enter your Card exp year\n");
	scanf("%d", &ExpYear);


	ExpYear = ExpYear * 10;

	for (int i = 1; i <= 3; i++){

	ExpYear_Verfiy = ExpYear % 10;
	}

	if (ExpYear_Verfiy == 0){

	}

	else{

	printf("Your Entered Exp Year is wrong\n");
	break;
	}

	printf("Enter your CVV Number\n");
	scanf("%d", &Card_CVV);

	
	Card_CVV = Card_CVV * 10;

	for (int i = 1; i <= 4; i++){


	Card_CVV_Verfiy = Card_CVV % 10;
	}

	if (Card_CVV_Verfiy == 0){

	}

	else{

	printf("Your Entered CVV is wrong\n");
	printf("%d", Card_CVV);
	break;
	}

	printf("Your OTP is 1234\n");


	while (1){

	scanf("%d", &BankOTP);
	if (BankOTP == 1234){

	printf("Your Payment is in Process\n");
	printf("Your Payment is Succesful\n");
	break;
	}

	else{

	printf("you have Enter wrong OTP\n");
	printf("Renter the OTP\n");
	}
	}

	break;

	default:

	    printf("You have selected wrong option\n");
    }
}

struct mynode {
    char name[20];
    char gen[6];
    int age;
};


void details(){
	int i, a;
	char val[20], gen[6];
	FILE* fptr;
	fptr = fopen("a.txt","w");


	
	system("cls");


	printf("\t\t\t\tEnter Number Of "
		"Passengers: \n");
	scanf("%d", &k);

	struct mynode arr[k];



	fflush(stdin);
    printf("\t\t\t\tEnter Date "
	"(DD/MM/YY):\n ");
	gets(date);

    char num[10];
    printf("Enter mobile number\n");
    scanf("%s",num);

    for (int i = 0; i < k; i++){
        printf("Enter the first name of %d Passenger\n",(i+1));

        scanf("%s",(arr[i]).name);

        printf("Enter the age\n");
        scanf("%d",&arr[i].age);

        printf("Enter the Gender\n");
        scanf("%s",arr[i].gen);
    }

    fprintf(fptr,"     Name                 age                    gender\n");


    for (int i = 0; i < k; i++){


       fprintf(fptr,"%s                     %d                       %s\n",(arr[i]).name, (arr[i]).age, (arr[i]).gen);



    }
    fclose(fptr);
}


void GuessGame(int amount_bet, int* inhand_cash)
{
char num[3] = { 'N', 'R', 'N' };
printf("\nWait !! number is shuffling its position...\n");

int i, x, y, temp;

for (i = 0; i < 5; i++) {
x = rand() % 3;
y = rand() % 3;
temp = num[x];
num[x] = num[y];
num[y] = temp;
}
int PlayerGuess;
printf("\nYou may now guess the number in which R is present: ");
scanf("%d", &PlayerGuess);
if (num[PlayerGuess - 1] == 'R') {
(*inhand_cash) += 2 * amount_bet;
printf("You win ! The numbers are as follows: ");
printf("\"%c %c %c\" ", num[0], num[1], num[2]);
printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
}
else {
(*inhand_cash) -= amount_bet;
printf("You Loose ! The numbers are as follows: ");
printf("\"%c %c %c\" ", num[0], num[1], num[2]);
printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
}
}
void mini_casino()
{
int amount_bet, inhand_cash;
/*
You have to guess the right number among 3 numbers.
The position where right number is is
named as 'R' and rest two are named as 'N'
If your guess is wrong, you loose the
amount_bet from your inhand_cash
If you guess it right, you win
twice the amount_bet in your inhand_cash
Keep playing and keep winning
until you go out of cash
*/
 printf("\n////////-WELCOME TO MINI CASINO-\\\\\\\\\\\\ \n");
printf("\n----Enter the inhand_cash you have right now---- :\n ");
scanf("%d", &inhand_cash);
while (inhand_cash > 0) {
printf("\nEnter the amount_bet you want to play for : \n");
scanf("%d", &amount_bet);
if (inhand_cash == 0 || amount_bet > inhand_cash)
break;
else
GuessGame(amount_bet, &inhand_cash);
}
if (inhand_cash == 0 || amount_bet > inhand_cash) {
printf("\n\""
" \nSorry you don't have enough cash to play more,\n ");
printf("\nDo come next time\""
"\n\n");
printf("\nThank You for playing \n");}
}
void complaints_suggestions(void){
 system("cls");
 char complain[500];
 FILE *ptr;
 if(ptr == NULL){
 printf("file cant be opened\n");
 }
 printf("please enter your complaints or suggestions");
 fflush(stdin);
 gets(complain);
 ptr = fopen("a.txt","w");
 fputs(complain,ptr);
 fclose(ptr);
}
int main()
{
    int j1=heading();
    int ch,chhh;
    int a,b,c;
    char pass_info[k][100],pass_gender[k][8];
    int pass_age[k];

switch(j1)
{
case 1:
    printf(" enter 1  if you are intrested to travel in india\n");
    printf("enter 2 if you are intrested in intracontinental tour\n");
    printf("enter 3 if you are intrested in intercontinental tour\n");
    printf("enter your choice");
    scanf("%d",&ch);
    if(ch==1)
    {
        a=india();
        details();
            printf("do you want to book hotel ?\n");
            printf("enter 1  if  you want  to book room else enter any number\n");
            scanf("%d",&chhh);
            if(chhh==1)
            {
                 u1=billing();
            }
            calculatebill(u1,a);
            pay();
           
            printf("do you want to play games\n");
            printf("enter 1 if you want to play  a mini game with us else enter any number\n");
            int chch;
            scanf("%d",&chch);
            if(chch==1)
            mini_casino();
            complaints_suggestions();
    }
    if(ch==2)
    {
        b=intracontinental();
        details();
        printf("do you want to book hotel ?\n");
            printf("enter 1  if  you want  to book room else enter any number\n");
            scanf("%d",&chhh);
            if(chhh==1)
            {
                 u1=billing();
            }
            calculatebill(u1,b);
            pay();
            //receipt(&pass_info,&pass_age,&pass_gender);
            printf("do you want to play games\n");
            printf("enter 1 if you want to play a mini game with us else enter any number\n");
            int chch;
            scanf("%d",&chch);
            if(chch==1)
            mini_casino();
            complaints_suggestions();


    }
    if(ch==3)
    {
        c=intercontinental();
        details();
        printf("do you want to book hotel ?\n");
            printf("enter 1  if  you want  to book room else enter any number\n");
            scanf("%d",&chhh);
            if(chhh==1)
            {
                 u1=billing();
            }
            calculatebill(u1,b);
            pay();
            
            printf("do you want to play games\n");
            printf("enter 1 if you want to play a mini game with us else enter any number\n ");
            int chch;
            scanf("%d",&chch);
            if(chch==1)
            mini_casino();
            complaints_suggestions();


    }
    printf("\n...........thank you for booking with us.........................\n");
    printf("\n ................................visit again......................\n");
    break;
default:
    exit(0);
}
    }
