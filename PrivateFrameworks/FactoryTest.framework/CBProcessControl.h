/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

@class NSDate, NSString;

@interface CBProcessControl : NSObject  {
    void *_intCBPC;
}

@property(readonly) int status;
@property(readonly) unsigned short absoluteFailCount;
@property(readonly) unsigned char relativeFailCount;
@property(readonly) unsigned short eraseCount;
@property(readonly) NSDate * timestamp;
@property(readonly) NSString * swVersion;

+ (id)processControlWithIPodObj:(struct { unsigned int x1 : 2; unsigned int x2 : 8; unsigned int x3 : 10; unsigned int x4 : 12; unsigned int x5; unsigned char x6[24]; }*)arg1;

- (id)timestamp;
- (id)description;
- (void)dealloc;
- (unsigned char)relativeFailCount;
- (id)swVersion;
- (unsigned short)eraseCount;
- (unsigned short)absoluteFailCount;
- (struct { unsigned int x1 : 2; unsigned int x2 : 8; unsigned int x3 : 10; unsigned int x4 : 12; unsigned int x5; unsigned char x6[24]; }*)_internalProcCntrl;
- (id)initWithStatus:(int)arg1 andFailCount:(int)arg2;
- (id)initWithIPodObj:(struct { unsigned int x1 : 2; unsigned int x2 : 8; unsigned int x3 : 10; unsigned int x4 : 12; unsigned int x5; unsigned char x6[24]; }*)arg1;
- (int)status;

@end
