/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSData;

@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream> {
    NSData *mData;
    const char *mBytes;
    long long mSize;
}


- (void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char *)arg3;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(unsigned int*)arg4;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (long long)size;

@end
