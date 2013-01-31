/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;

@interface VMUSection : NSObject  {
    NSString *_sectionName;
    NSString *_segmentName;
    unsigned long long _addr;
    unsigned long long _size;
    unsigned int _offset;
    unsigned int _align;
    unsigned int _reloff;
    unsigned int _nreloc;
    unsigned int _flags;
    unsigned int _reserved1;
    unsigned int _reserved2;
}


- (unsigned int)align;
- (id)description;
- (void)dealloc;
- (unsigned int)reserved2;
- (unsigned int)reserved1;
- (unsigned int)nreloc;
- (unsigned int)reloff;
- (BOOL)isSection64;
- (BOOL)isSection32;
- (id)sectionName;
- (id)segmentName;
- (unsigned long long)addr;
- (unsigned int)flags;
- (unsigned int)offset;
- (unsigned long long)size;

@end
