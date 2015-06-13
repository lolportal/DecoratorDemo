#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

/* Abstract class, that will be used as a subclass for all types of
 * beverages and their decorators.
 */

class Beverage
{
    std::string _description;

protected:
    Beverage() = default;
    virtual ~Beverage() = default;

public:
    virtual std::string get_description() const
    {
        return _description;
    }

    virtual double cost() const = 0;

private:
    Beverage(const Beverage&) = delete;
    Beverage& operator=(const Beverage&) = delete;
};

#endif // BEVERAGE_H