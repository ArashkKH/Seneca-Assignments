
struct Flower {
    char name[21];
    float price;
    char color[11];
    int id;
};

void populateFlower(struct Flower* flower);
void displayFlower(struct Flower* flower);
void modifyPrice(struct Flower* flower);

void populateAllFlower(struct Flower flowers[], int sz);
void displayAllFlower(struct Flower flowers[], int sz);  