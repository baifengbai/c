#include<iostream>

class  fushu
{
public:
	explicit  fushu(int num)//������ʽת������������
	{
		x = num;
		y = num;

	}
	void print()
	{
		std::cout << x << "+" << y << "i" << std::endl;
	}
	operator int();
	//��֧����Ԫ������֧�ֳ�Ա����
	 operator double()
	{
		 return (double)(x + y);
	}
	
protected:
private:
	int x;
	int y;
};
fushu::operator int()//����֮���ת������
{
	return x *y;
}

//ת���и�ֵ����������


void main3()
{
	int num(100.9);
	fushu fushu1(num);//���캯��
	fushu1.print();
	int data = (int)fushu1 + 10;//����ת�����԰�һ���Զ������͵���������������������
	std::cout << data << std::endl;

	std::cin.get();



}

void main2()
{
	int num ( 100.9);
	fushu fushu1(num);//���캯��
	fushu1.print();

	//int data (fushu1);//ת����������ʾ���ã�int(a),(int)a,a.operator int ()
	//int data = fushu1;//�˴�ʵ�ֵ���fushu1���int()��ע��˴�����ʽ����
	//int data = (int)fushu1;ͬ��
	//int data = int (fushu1);ͬ��
	//int data ( int(fushu1));�ȵ�������ת�����ٵ��ù���
	//std::cout << data << std::endl;
	std::cin.get();

}

void main1()
{
	 int num (10.8);//������������ 
	//��ʽת������ʽת�����Ƿ��������ת����

	//fushu fushu1 = (fushu)10.8;
	//fushu fushu1 = static_cast<fushu>(10.8);

	fushu fushu1 =(fushu)10;//���캯��
	//int  numA = fushu1;
	fushu1.print();
	std::cin.get();



}