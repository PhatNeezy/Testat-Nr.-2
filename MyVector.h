//Erstellt von 1802005 und 4666453

#ifndef Vector
#define Vector

template<class T>
class MyVector
{
private:
	//declarations
	unsigned int m_size; //size of the array
	unsigned int m_capacity; //capacity of the array
	T* m_elements; //dynamic array

public:
	//constructor
	MyVector(); //standard constructor
	MyVector(const MyVector<T>& vecCopy); //copy constructor
	MyVector(unsigned int size); //predefined constructor

	//destructor
	~MyVector();

	//operators
	MyVector& operator= (const MyVector& vecCopy); // = operator
	T& operator[] (unsigned int pos); // [] operator
	const T& operator[] (unsigned int pos) const; // [] operator

	//functions
	T& at(unsigned int); //show the value at the desired postion of the vector
	void push_back(const T&); //add a constant value to the end of the vector
	void push_back(T&); //add a variable value to the end of the vector
	void pop_back(); //delete the last value of the vector
	void push_back_eff(const T&); //add constant value more effective
	void push_back_eff(T&); //add value more effective
	void pop_back_eff(); //delete the last value of the vector more effective
	void reserve(unsigned int); //reserve storage
	unsigned int size() const; //return size of the vector
	unsigned int capacity() const; //return capacity of the vector
	void clear(); //clear the vector
};

//constructor
template<class T>
MyVector<T>::MyVector()
{
	//set size to zero
	m_size = 0;

	//set capacity to zero
	m_capacity = 0;

	//set pointer to nullptr
	m_elements = nullptr;
}

//copy constructor
template<class T>
MyVector<T>::MyVector(const MyVector<T>& vecCopy)
{
	//copy content of the member variables
	m_size = vecCopy.m_size;
	m_capacity = vecCopy.m_capacity;

	//copy content of the selcted array in the target array
	m_elements = new T[m_capacity];
	for (int i = 0; i < m_size; i++)
	{
		m_elements[i] = vecCopy.m_elements[i];
	}
}

//predefined constructor
template<class T>
MyVector<T>::MyVector(unsigned int capacity):m_capacity(capacity) //set directly m_capacity to the wished size with a initialitation list
{
	//set size to zero
	m_size = 0;

	//create a dynamic array with the desired size
	m_elements = new T[capacity];
}

//destructor
template<class T>
MyVector<T>::~MyVector()
{
	//delete the content of the array
	if (m_elements != nullptr)
	{
		delete[] m_elements;
	}


	//set to nullptr
	m_elements = nullptr;

	//set m_size to zero
	m_size = 0;

	//set number of elements to zero
	m_capacity = 0;
}

//=-operator
template<class T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& vecCopy)
{
	//check if the array is allready filled
	if (m_elements != nullptr)
	{
		delete[] m_elements;
	}

	//copy content of the member variables
	m_capacity = vecCopy.m_capacity;
	m_size = vecCopy.m_size;

	//copy content of the selcted array in the target array
	m_elements = new T[m_capacity];
	for (unsigned int i = 0; i < m_size; i++)
	{
		m_elements[i] = vecCopy.m_elements[i];
	}

	//return vector if vec_a = vec_b = vec_c will be used
	return *this;
}

//[]-operator
template<class T>
T& MyVector<T>::operator[](unsigned int pos)
{
	//check if desired posistion is out of range
	if (pos >= m_size)
	{
		//if it is the case, return last value of the vector
		std::cout << "ATTENTION: The position " << pos << " dont exisit, the returned value is the last value of the vector!" << std::endl;
		return m_elements[m_size - 1];
	}

	//if the position is in the range, return desired value
	return m_elements[pos];
}

//[]-operator if const
template<class T>
const T& MyVector<T>::operator[](unsigned int pos) const
{
	//check if desired posistion is out of range
	if (pos >= m_size)
	{
		//if it is the case, return last value of the vector
		std::cout << "ATTENTION: The position " << pos << " dont exisit, the returned value is the last value of the vector!" << std::endl;
		return m_elements[m_size - 1];
	}

	//if the position is in the range, return desired value
	return m_elements[pos];
}

template<class T>
T& MyVector<T>::at(unsigned int pos)
{
	//check if desired posistion is out of range
	if (pos >= m_size)
	{
		//if it is the case, return last value of the vector
		std::cout << "ATTENTION: The position " << pos << " dont exisit, the returned value is the last value of the vector!" << std::endl;
		return m_elements[m_size - 1];
	}

	//if the position is in the range, return desired value
	return m_elements[pos];
}

//funktion to add a constant value at the end of the array
template<class T>
void MyVector<T>::push_back(const T& value)
{
	//create a temporary array with one size larger then the main array
	T *new_elements = new T[m_capacity + 1];

	for (unsigned int i = 0; i < m_size; i++)
	{
		//copy the content of the main array into the temporary array
		new_elements[i] = m_elements[i];
	}

	//add the value to the temporrary array
	new_elements[m_size] = value;

	//delete the content of the main array
	if (m_elements != nullptr)
	{
		delete[] m_elements;
	}

	//copy the content from the temporary array to the main array
	m_elements = new_elements;

	//increase the size variable
	m_size++;
	m_capacity++;
}

//funktion to add a value at the end of the array
template<class T>
void MyVector<T>::push_back(T& value)
{
	//create a temporary array with one size larger then the main array
	T *new_elements = new T[m_capacity + 1];

	for (int i = 0; i < m_size; i++)
	{
		//copy the content of the main array into the temporary array
		new_elements[i] = m_elements[i];
	}

	//add the value to the temporrary array
	new_elements[m_size] = value;

	//delete the content of the main array
	if (m_elements != nullptr)
	{
		delete[] m_elements;
	}

	//copy the content from the temporary array to the main array
	m_elements = new_elements;

	//increase the size variable
	m_size++;
	m_capacity++;
}

//function to delete the last value of the vector
template<class T>
void MyVector<T>::pop_back()
{
	if (m_size > 0)
	{
		//create a temporary array with one size larger then the main array
		T *new_elements = new T[m_capacity - 1];

		for (unsigned int i = 0; i < m_size - 1; i++)
		{
			//copy the content of the main array into the temporary array
			new_elements[i] = m_elements[i];
		}

		//delete the content of the main array
		if (m_elements != nullptr)
		{
			delete[] m_elements;
		}

		//copy the content from the temporary array to the main array
		m_elements = new_elements;

		//increase the size variable
		m_size--;
		m_capacity--;
	}
	else
	{
		std::cout << "The vector is empty, there is nothing to remove!" << std::endl;
	}
}

//function to add a value to the end of the vector, but dont create a new array and delete the old array constantly
//thats a more effective variant to add a value to the vector
template<class T>
void MyVector<T>::push_back_eff(T& value)
{
	//check if the currently array is empty
	if (m_elements == nullptr)
	{
		//if it is empty create a new one with a capacity of 1
		m_capacity = 1;
		m_elements = new T[m_capacity]
	}

	//check if the maximum size of the vector was reached
	if (m_size == m_capacity)
	{
		//if it is the case, doubles the capacity
		reserve(m_size * 2);
	}

	//add the desired value to the vector and increase the size variable
	m_elements[m_size] = value;
	m_size++;
}

//function to add a constant value to the end of the vector, but dont create a new array and delete the old array constantly
//thats a more effective variant to add a value to the vector
template<class T>
void MyVector<T>::push_back_eff(const T& value)
{
	//check if the currently array is empty
	if (m_elements == nullptr)
	{
		//if it is empty create a new one with a capacity of 1
		m_capacity = 1;
		m_elements = new T[m_capacity];
	}

	//check if the maximum size of the vector was reached
	if (m_size == m_capacity)
	{
		//if it is the case, doubles the capacity
		reserve(m_size * 2);
	}

	//add the desired value to the vector and increase the size variable
	m_elements[m_size] = value;
	m_size++;
}

//function to remove the last value of the vector, but dont create a new array and delete the old array constantly
//thats a more effective variant to remove a value of the vector
template<class T>
void MyVector<T>::pop_back_eff()
{
	if (m_size > 0)
	{
		//decrease size of the vector
		m_size--;
	}
	else
	{
		std::cout << "The vector is empty, there is nothing to remove!" << std::endl;
	}
}

//function to reserve storage for the vector
template<class T>
void MyVector<T>::reserve(unsigned int size)
{
	//create a temporary array with the double capacity of the main array and copy the content
	T* new_elements = new T[size];
	for (unsigned int i = 0; i < m_size ; i++)
	{
		new_elements[i] = m_elements[i];
	}

	//doubles the capacity
	m_capacity = size;

	//delete the content of the main array
	if (m_elements != nullptr)
	{
		delete[] m_elements;
	}

	//copy the content from the temporary array to the main array
	m_elements = new_elements;
}

//function to return the size of the vector
template<class T>
unsigned int MyVector<T>::size() const
{
	return m_size;
}

//function to return the capacity of the vector
template<class T>
unsigned int MyVector<T>::capacity() const
{
	return m_capacity;
}

template<class T>
void MyVector<T>::clear()
{
	//delete the content of the array
	if (m_elements != nullptr)
	{
		delete[] m_elements;
	}

	//set to nullptr
	m_elements = nullptr;

	//set m_size to zero
	m_size = 0;

	//set number of elements to zero
	m_capacity = 0;
}

#endif //!define MyVector