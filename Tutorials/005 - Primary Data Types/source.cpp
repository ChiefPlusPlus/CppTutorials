int main()
{
    /*
        bool holds the most basic piece of information:
        
        - true / false
        - yes / no
        - on / off
        - 1 / 0
    */
    bool boolean = false; 

    /*
        With integers there are two main aspects to consider 
        
        - Signedness: 
            - signed (+ or -) 
            - unsigned (only +)
        - Size: 8 / 16 / 32 / 64 bits 
            - The more bits the larger the number but the more space is used!

        int by default is a signed 32 bit integer
    */
    int8_t i8;
    int16_t i16;
    int32_t i32;
    int64_t i64;

    uint8_t u8;
    uint16_t u16;
    uint32_t u32;
    uint64_t u64;

    /*
        Floating point types have two variants:

        - single (32 bit)
        - double (64 bit)

        Similarly to the integers the more bits used the larger range / accuracy
        but the more memory is used
    */
    float f32;
    double f64;

    char character = 'x';

}