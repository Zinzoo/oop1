class Plant
{
public:
    virtual void grow()=0;
    virtual void photosynthesis()=0;
};

class Crop : Plant
{
public:
    virtual bool eatable()
    {

    };

    void grow(){}
    void photosynthesis(){}
};

class Bush : Plant
{
public:
    virtual bool have_flowers()
    {

    };

    void grow(){}
    void photosynthesis(){}
};

class Potato : Crop
{
private:
	char *size;
	int harvest_day;
 
public:
	Potato(int size, char *harvest_month){}
	void grow(){}
	void photosynthesis(){}
};

class Carrot : Crop
{
private:
	char *nickname;
	int length;
 
public:
	Carrot(char *nickname, int length){}
	void grow(){}
	void photosynthesis(){}
};
class Rhododendron : Bush
{
private:
	int no_of_flowers;
	char *colour;
public:
	Rhododendron(int no_of_flowers, char *colour){};
	void grow(){}
	void photosynthesis(){}
};

int main(int argc, char const *argv[])
 {
 	Potato numberone = Potato(16, "July");
 	Carrot janusz = Carrot("Janusz", 25);
 	Rhododendron numerouno= Rhododendron(163, "Bright pink");
 } 