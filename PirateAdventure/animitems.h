#ifndef ANIMITEMS_H
#define ANIMITEMS_H

class animItems
{
private:
    int hits[3][3];
public:
    /**
     * @brief animItems
     */
    animItems();
    /**
     * @brief reset
     */
    void reset();
    /**
     * @brief getHit
     * @param i
     * @param j
     * @return
     */
    int getHit(int i, int j);
    /**
     * @brief setHit
     * @param i
     * @param j
     * @param val
     */
    void setHit(int i, int j, int val);
};

#endif // ANIMITEMS_H
