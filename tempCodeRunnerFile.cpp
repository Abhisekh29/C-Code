double priceDuringAuction()
    {
        double base_price = numberOf_Matches * 100 + numberOf_Trophies * 500 - age * 100;
        return base_price + 1000;
    }