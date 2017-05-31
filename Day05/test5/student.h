class student {
	public:
		//构造函数可以重载，但是析构函数不可以
		student(int id);

		~student();
		
		void setId(int id)
		{
			m_id = id;
		}

		int getId()
		{
			return m_id;
		}

	private:
		int m_id;


};
