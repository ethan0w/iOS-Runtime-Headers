/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipInputBundle : NSObject <SFUInputBundle> {
    SFUZipArchive * _zipArchive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)bufferedInputStreamForEntry:(id)arg1;
- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)dealloc;
- (BOOL)hasEntryWithName:(id)arg1;
- (id)initWithZipArchive:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;

@end
