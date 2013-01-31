/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDate, NSData, NSString;

@interface NSPageData : NSData  {
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (void)initialize;
+ (int)_umask;

- (const void*)bytes;
- (id)data;
- (void)dealloc;
- (id)init;
- (unsigned int)length;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (unsigned int)writeFd:(int)arg1;
- (id)deserializer;
- (id)initFromSerializerStream:(id)arg1 length:(unsigned int)arg2;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;
- (id)_mappedFile;
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;
- (unsigned int)writeFile:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;

@end
