/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFData : NSMutableData {
    char * _bytes;
    struct __CFAllocator { } * _bytesDeallocator;
    long  _capacity;
    unsigned char  _cfinfo;
    long  _length;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)length;
- (void*)mutableBytes;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setLength:(unsigned int)arg1;

@end
