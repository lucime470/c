#include <stdio.h> //ͷ�ļ�
#include <string.h> //�ṩ����strcspn��strlen�����������ַ���
// #include <windows.h> //�ṩMAX_PATH·����󳤶ȣ����о������Ǻܱ�Ҫ����� 3��𣩣���ʵ���Ǳ�Ҫ��(MAX_PATHȷʵ����ν)���������ԭ���ķ�����д��SHGetFolderPath���� Windows�ض�����,CSIDL_MYDOCUMENTS�ȳ���������<shlobj.h>����<shlobj.h>����������Windows�������ͣ�����ֱ�ӻ�����������ͷ�ļ�ȫ��ע�͵���*��-��*��
// #include <shlobj.h>  //�ṩSHGetFolderPath������CSIDL_DESKTOPDIRECTORY����
#include <time.h> //������ȡʱ���,ʱ���ָ��������ʱ��1970��01��01��00ʱ00��00���������ڵ�������
//�������ļ�����ˣ��е㸴�ӣ�Ҳ���Ǻܱ�Ҫ

void main_menu_print() //����������˵�����
{
    int i;
    char a[][10]={"�˵�","����","��ʳ","��Ʒ","����","����"}; //һά����ֻ�ܴ��浥���ַ�����UTF-8������ÿ�����������ֽڣ����ȶ�Ϊ6������һ�����鴢��˵���������ࡣ��ֹ���벻һ�����ְѳ��ȸ�Ϊ10�ˣ�Ӧ�ò�����������
    printf("%s\n",a[0]); //%s��ʾ�ַ�������������˵���
    for(i=1;i<6;i++) //i����=6��i��1��ʼ��������ڶ���
    {
        printf("\t%d.%s\n",i,a[i]); // \tΪ�Ʊ������Ϊ���ۡ�ѭ��������ֺ���������Ӧ�Ĳ�Ʒ����
    }
    puts("\t0.�������\n");
}

struct dishes //�����Ʒ�ṹ��
{
    int number; //������
    char name[50]; //�����Ʒ��
    double price; //�����Ʒ�۸�
    int count; //���屻�����
}; //�ṹ������ԣ�����

struct dishes cool_dishes[3]={{1,"����ƹ�",10.0,0}, //�ṹ�������к���֮�⣬Ϊȫ�ֱ����������ں�����ֱ��ʹ��
                              {2,"����ţ��",50.0,0}, 
                              {3,"Ƥ������",15.0,0}}; //��ʼ���ṹ�壬ԭ��ʹ��struct dishes cool_dishes1={1,"����ƹ�",10.0};���ֱ��ʼ��������Ʒ�ṹ�壬���ǲ����ڽ������ĺ�����ѭ����������Ը�Ϊʹ�ýṹ����������������Ʒ�ı�ţ����ƣ��۸񣬱������
 //Ҫʹ��������������struct dishes������ʹ��typedef�����壬��typedef struct { } dish;Ȼ��Ϳ���ֱ��ʹ��dish cool_dishes1={ }

void menu_cool_dishes() //����������˲˵��ĺ���
{
    int i;
    puts("======= ���˲˵� =======\n");
    for(i=0;i<3;i++)
    {
        printf("%d.%-15s %.2f\n",//%-15s�����15���ַ��Ŀ�ȣ�%.2f������λС����\n�ǵû��б�֤����
                          cool_dishes[i].number, //�ֱ���ʲ�Ʒ���
                          cool_dishes[i].name, //����
                          cool_dishes[i].price); //�۸�
    } 
    puts("======================");
    puts("0.�����ϲ�˵�");
    puts("��ѡ��һ����Ʒ:");
}

struct dishes main_dishes[3]={{1,"�׷�",2.0,0},
                              {2,"����",5.0,0},
                              {3,"��ͷ",1.0,0}};

void menu_main_dishes()
{
    int i;
    puts("======= ��ʳ�˵� =======\n");
    for(i=0;i<3;i++)
    {
        printf("%d.%-15s %.2f\n",
            main_dishes[i].number,
            main_dishes[i].name,
            main_dishes[i].price);
    }
    puts("========================");
    puts("\t0.�����ϲ�˵�");
    puts("��ѡ��һ����Ʒ:");
}

struct dishes sweet_dishes[3]={{1,"��ݮ����",52.001,0},
                               {2,"��֦��¶",108.0,0},
                               {3,"��������",268.0,0}};

void menu_sweet_dishes()
{
    int i;
    puts("======= ��Ʒ�˵� =======\n");
    for(i=0;i<3;i++)
    {
        printf("%d.%-15s %.2f\n",
            sweet_dishes[i].number,
            sweet_dishes[i].name,
            sweet_dishes[i].price);
    }
    puts("========================");
    puts("\t0.�����ϲ�˵�");
    puts("��ѡ��һ����Ʒ:");
}

struct dishes drink_dishes[3]={{1,"�̲�",15.0,0},
                               {2,"����",5.0,0},
                               {3,"ѩ��",4.0,0}};

void menu_drink_dishes()
{
    int i;
    puts("======= ���ϲ˵� =======\n");
    for(i=0;i<3;i++)
    {
        printf("%d.%-15s %.2f\n",
            drink_dishes[i].number,
            drink_dishes[i].name,
            drink_dishes[i].price);
    }
    puts("========================");
    puts("\t0.�����ϲ�˵�");
    puts("��ѡ��һ����Ʒ:");
}

struct dishes specialty_dishes[3]={{1,"������",65.0,0},
                                   {2,"�������",100.0,0},
                                   {3,"��������",74.0,0}};

void menu_specialty_dishes()
{
    int i;
    puts("======= ���Ʋ˵� =======\n");
    for(i=0;i<3;i++)
    {
        printf("%d.%-15s %.2f\n",
            specialty_dishes[i].number,
            specialty_dishes[i].name,
            specialty_dishes[i].price);
    }
    puts("========================");
    puts("\t0.�����ϲ�˵�");
    puts("��ѡ��һ����Ʒ:");
}

void clear_input() //��������������浥��ʹ����һ�������û���жϣ���type_and_range_judge�������������ͬʱ�жϷ�Χ�ĺ�����һ����,���Ȳ����������д�����������˦�(�����)��+
{
    int c;
    while ((c=getchar())!='\n'&&c!=EOF){}
}

int type_and_range_judge_in_main_menu(int r, int m) //����һ�������ж��û�������Ƿ�Ϊ�������Ƿ��ڷ�Χ�ڵĺ�����ԭ������������ֱ��ʹ�ã����ǻ���ж���жϣ����Է�װ�ɺ���������ֱ�ӵ���
{
    int c;
    while ((c=getchar())!='\n'&&c!=EOF){} //��ѭ��������������ַ���ȡ������������c���Դﵽ��ջ����������á�c�����Ͷ���Ϊint����Ϊgetchar�ķ���ֵΪint��
    if(r!=1) //���scanf�ķ���ֵ����1��û�л�ȡ�ĵ�����
    {   
        puts("���������������������");           
        return 1; //����Ҫдreturn 1 ԭ�����������п���ֱ��дcontinue�˳���ǰѭ����ʼ��һ��ѭ��
    }
    if(m < 0 || m > 5) //�ж�����������Ƿ�����ȷ��Χ��
    {
        puts("������0��5֮�������");
        return 1;
    }
    return 0;
}

int type_and_range_judge_in_submenu(int r, int m) //�ٶ���һ���Ӳ˵����жϣ�Ҳ���Խ�����ԭ�����˵����жϺ�����һ�£���m<0||m>5�е����ָ�Ϊmin��max���������õ�ʱ���ֵ�����ǲ�����ˣ�����ֱ�Ӹ�������ٸĸ�������������^-^
{
    int c;
    while ((c=getchar())!='\n'&&c!=EOF){} 
    if(r!=1) 
    {   
        puts("���������������������");           
        return 1; 
    }
    if(m < 0 || m > 3) 
    {
        puts("������0��3֮�������");
        return 1;
    }
    return 0;
}

int type_and_range_judge_in_character_choose(int r, int m) //�ٶ���һ����ɫѡ����ж�
{
    int c;
    while ((c=getchar())!='\n'&&c!=EOF){} 
    if(r!=1) 
    {   
        puts("���������������������");           
        return 1; 
    }
    if(m < 1 || m > 2) 
    {
        puts("������1��2");
        return 1;
    }
    return 0;
}

void order_dishes(struct dishes *dish_array, void (*menu_print)()) //struct dishesΪ����Ĳ�Ʒ�ṹ���ͣ�dish_array����Ʒ���飩����һ��ָ��struct dishes���������ָ�롣voidָ��û�з���ֵ�ĺ�����menu_print����һ������ָ��
{
    int n,r;
    menu_print(); //�����Ӳ˵��ĺ���
    while(1)
    {
        r=scanf("%d",&n);
        if(type_and_range_judge_in_submenu(r, n))
        {
            continue;
        }
        if(n==0)
        {
            break;
        }
        printf("��ѡ����һ��%s\n",dish_array[n-1].name); //�ǵ�n-1
        dish_array[n-1].count++; //���������һ
    }
} //��Ϊ�����ظ����Ƶĵ�ͣ����Խ��Ӳ˵�����ٷ�װ��һ�����������Զ�ε���

void print_order_summary(FILE *stream,struct dishes *dish_array) //����һ��������ʵ����������Ʒ���Ƽ��۸�ͷ���,С��һ�������������ļ��Ĳ�����������FILE *stream��ʾһ������/�����
{
    int i;
    double total = 0.0;
    for (i = 0; i < 3; i++) 
    {
        if (dish_array[i].count > 0)
        {
            total = dish_array[i].price * dish_array[i].count;
            fprintf(stream," %-10s\t\t%.3f\t\t%d\t%.3f\n", dish_array[i].name, //���������˵������Ǽ�һ��stream�ˣ�ֱ�Ӿ���һ������r���s�ߨt���q
                                                dish_array[i].price,
                                                dish_array[i].count,
                                                total);
        }
    }
}

double calculate_total(struct dishes *dish_array) //����һ������������ÿ������Ĳ˵��ܼ�
{
    int i;
    double total=0.0;
    for (i=0;i<3;i++)
    {
        total=total+dish_array[i].price*dish_array[i].count;
    }
    return total;
}

double calculate_grand_total() //����һ���������������Ĳ˵��ܼ����
{
    double total=0.0;
    total += calculate_total(cool_dishes);
    total += calculate_total(main_dishes);
    total += calculate_total(sweet_dishes);
    total += calculate_total(drink_dishes);
    total += calculate_total(specialty_dishes);
    return total;
}

void print_summary_to_txt() //����һ��������д��txt�ļ��ĺ���
{
    // char desktop_path[MAX_PATH]; //MAX_PATHΪWindows ����ĳ�����ֵΪ 260
    // SHGetFolderPath(NULL, CSIDL_DESKTOPDIRECTORY, NULL, 0, desktop_path); //SHGetFolderPath���ڻ�ȡ�ļ�·����CSIDL_DESKTOPDIRECTORYָ��Ҫ��ȡ���������ļ���
    // FILE *file_print = fopen(desktop_path"\\summary.txt", "a+"); //fopen���ļ���a+Ϊ׷�����ݣ�wΪֻ���Ḳ��֮ǰд�����Ϣ,\Ϊת�����\\Ϊ\������������ע���ﵥдһ����б�ܣ�����������������Ǵ���Ķ���ע��o(���أ�o��)��
    // ���������ȫ��ע�͵��ɣ����������洴���ļ���Ϊ�˷��㣬���Ǻ���û��ʲô��Ҫ(��_��;)
    FILE *file_print=fopen("order_summary.txt","a+"); //FILE�͵�ָ�룬fopen�����ڴ��ļ��ĺ������ú�����Ҫ�ļ����ʹ�ģʽ����������Ϊ�򿪵��ļ��½�һ������ʲô������X�nX��Ȼ�󷵻�ָ��FILE�Ͷ����ָ�룬����Ļ�����file_print
                                                      //��ģʽ�кܶ࣬rֻ����wֻд�������֮ǰд�������ݣ���r+���Ը��´��ļ�����a׷�ӣ�����ĩ��ʼ��ֻд��ֻд�������֮ǰ��������
    // if (!file_print) 
    // {
    //     printf("����");
    //     return;
    // }
    //�����������Ƿ񴴽����ļ�����Ϊ�Ǵ����ں�.c�ļ�ͬһ·��������ΪȨ�޲���û������(��������)�������һ����û�з��ش���ԭ���Ǵ�����outp���exe�ļ���ͬһ��·��

    fprintf(file_print,"\n======================= ������ϸ =======================\n");
    time_t now = time(NULL); //time_t��ʾʱ��ı�׼�������ͣ�time�������Ի�ȡ��ǰϵͳʱ�䣬NULL��ʾ����Ҫ������洢�ڶ�������У�ֻͨ������ֵ��ȡʱ���
    fprintf(file_print, "����:%s",ctime(&now)); //ctime������ʱ���ת��Ϊ�ɶ����ַ���,������&now����Ϊ������������ֵ���ݿ��Է�ֹ�ܶ����⣬��Ȼ��Щ���ⲻһ��������
                                                //������ctime���������ֻ����Ӣ��(�ѩn��)Ҫת�������е㸴�ӣ��Ͳ�����
    fprintf(file_print,"����\t\t\t���ۣ�Ԫ��\t����\t�ܼ�\n");
    print_order_summary(file_print,cool_dishes); //����Ҫ��һ��file_print�������order_summary.txt����ļ���
    print_order_summary(file_print,main_dishes);
    print_order_summary(file_print,sweet_dishes);
    print_order_summary(file_print,drink_dishes);
    print_order_summary(file_print,specialty_dishes);
    double grand_total = calculate_grand_total(); 
    fprintf(file_print,"=========================================================\n");
    fprintf(file_print,"�ܼ۸�\t\t\t\t\t%.3f\n",grand_total);
    fprintf(file_print,"=========================================================\n");                                                 
    fclose(file_print); //�ر��ļ�������ҪŶo(���أ�o��)
}

void read_txt() //��дһ��������ȡ�ĺ�������ʵ���ȡ����������д�����ܶ๦�ܣ��������ذ�����Ʒ���ֵĶ�����Ϣ�����߰��ձ�������������ж������򡣵���������ȼ򵥵Ķ�ȡһ�¾���
{
    FILE *file = fopen("order_summary.txt", "r");
    char line[256]; //�����ַ����������ȷָ������,��������ѡ��:256�ʺ���ͨ�ı���
    int order_count=0;
    while (fgets(line, sizeof(line), file)) //fgets���ж�ȡ�ļ�,sizeof(line)�Զ����㻺������С,��ֹ���������(����Ӧ�ò������n(*�R���Q*)n)
     {                      
        line[strcspn(line, "\n")] = '\0'; //�Ƴ����з���strcspn���ֲ��ң�����ֵΪ\n������λ��
        printf("%s\n", line);
        order_count++; //����ļ��ǿյĻ���fgets�᷵��nullѭ������ִ�У�Ҳ�Ͳ������
    }
    fclose(file);
    if (order_count==0) //���==0Ҳ����û�м������Ǿ��ǿ��ļ�
    {
        puts("û�ж�����Ϣ");
    }
}

int main()
{
    int m,r; //����˵�����͵�����Ʒ�Ķ�Ӧ��������ɾ��δʹ�ñ���n
    puts("=====���������=====");
    puts("��ѡ��������ݣ�");
    puts("1.�ͻ�");
    puts("2.�ϰ�");
    r=scanf("%d",&m);
    if(m==2) //�����ϰ����ݣ�������������������ʵ�ֵģ����൱���Ǻ���һ����
    {
        clear_input(); //һ��Ҫ�ǵ����һ�»�����������Ӱ���������fgets�Ļ�ȡ��һ��Ҫ�ӣ�����( ��ա�)
        char password[100];
        puts("���������룺");
        fgets(password,sizeof(password),stdin); //sizeof(password)�Զ����㻺������С,stdin��������,fgets��ȡ�����ַ���
        size_t len = strlen(password); //strlen()���ڼ����ַ�������,size_t �޷����������ͣ�ר�����ڱ�ʾ��С�ͳ���,������len��
        if (len > 0 && password[len-1] == '\n') //�����������Ļ��з�
        {
            password[len-1] = '\0';
            len--; //����Ӧ�ò������õ����ַ���������صĶ���(��-`��?-)�����������Ű�(??��??)
        }
        while(strcmp(password, "ʮ�о��˿����ۣ�����һ��������") != 0) //password!="ʮ�о��˿����ۣ�����һ��������"ԭ��ʹ�ô˷������ж��Ƿ�������ȷ������!= �Ƚϵ����ڴ��ַ���������ַ������ݣ�password ���ַ�����ĵ�ַ��"ʮ�о��˿����ۣ�����һ��������" ����һ���ڴ��ַ
        {                                                           //strcmp() ��������ַ��Ƚ��ַ������ݣ�����ֵΪ0��ʾ�ַ�����ȫ��ͬ����Ҫ���� <string.h> ͷ�ļ�
            puts("����������������룺");
            fgets(password,sizeof(password),stdin);
            size_t len = strlen(password); 
            if (len > 0 && password[len-1] == '\n') //���ﴦ���з���if��䣬Ҳ���Ի�����strcmp�����Һ��滻password[strcspn(password, "\n")] = '\0';���Ӽ��һЩ
            {
                password[len-1] = '\0';
                len--;
            }
        }
        puts("��¼�ɹ�");
        puts("��������ʷ����");
        read_txt();
    }

    if(m==1)
    {
        puts("=====��ӭ�����=====");
        while(1) //����ѭ������python�г�ʹ�õ�while true��ͬ��while��true��Ҳ����ʵ������ѭ��������Ҫ����<stdbool.h> ͷ�ļ�������ֱ��ʹ�ú궨��
        {
            main_menu_print(); //�������˵��������
            puts("��ѡ��һ����Ʒ����");
            r=scanf("%d",&m); //��ȡ����ֵ��ֵ��r��scanf�Ŀ��ܷ���ֵΪ1����ȡ��������0�����벻ƥ�䣬EOF���������
            if(m==0) //ѡ��0ʱ�˳�
            {
                puts("��ӭ�´ι���");
                break;
            }
            if(type_and_range_judge_in_main_menu(r, m)) //���������жϺ���,����ֵΪ1��ִ��continue
            {
                continue; // ������Ч�����¿�ʼѭ��
            }
            switch(m) //switch��䣬����m��ֵ����Ӧִ��
            {
                case 1: //��ӦֵΪ1ʱ
                {
                    puts("��ѡ���������");
                    order_dishes(cool_dishes, menu_cool_dishes); //���ú�������˵�������ѡ��,����ʱ��Ҫ��void
                    break; //switch-case���ǵü�break��һ��Ҫ�ӣ�������QAQ
                }
                case 2:
                {
                    puts("��ѡ�������ʳ");
                    order_dishes(main_dishes, menu_main_dishes);
                    break;
                }
                case 3:
                {
                    puts("��ѡ�������Ʒ");
                    order_dishes(sweet_dishes, menu_sweet_dishes);
                    break;
                }
                case 4:
                {
                    puts("��ѡ���������");
                    order_dishes(drink_dishes, menu_drink_dishes);
                    break;
                }
                case 5:
                {
                    puts("��ѡ���������");
                    order_dishes(specialty_dishes, menu_specialty_dishes);
                    break;
                }
                
            }
        }
        printf("\n======================= ������ϸ =======================\n");
        printf("����\t\t\t���ۣ�Ԫ��\t����\t�ܼ�\n");
        print_order_summary(stdout,cool_dishes); //���ú������ÿ������Ĳ˵��ܽ�,�ĺ��¼�stdout���������������̨
        print_order_summary(stdout,main_dishes);
        print_order_summary(stdout,sweet_dishes);
        print_order_summary(stdout,drink_dishes);
        print_order_summary(stdout,specialty_dishes);
        double grand_total = calculate_grand_total(); //���ú����������в˵��ܼ�,����ֵ��grand_total
        printf("=========================================================\n");
        printf("�ܼ۸�\t\t\t\t\t%.3f\n",grand_total); //Ӧ�����grand_total������total
        printf("=========================================================\n");
        printf("ף���ò���죬��ӭ�´ι���");
        print_summary_to_txt();
        return 0;
    }
}
//д��ඣ�����ʵ���������
//��β���д���ˣ������˿ͻ����ϰ��ѡ��o(*�����*)o
//Ӧ�û��ϴ�����GitHub�ϣ���Ȼ���ֳ���һץһ��ѣ����ǵ�һ��д��������һ��ϵͳ������blogҲ���ϴ���
//�����ҵ�github https://github.com/lucime470/c �鿴��������
//blog���ƵõȺܾ���https://lucime470.github.io/

