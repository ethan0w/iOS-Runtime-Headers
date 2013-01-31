/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL, NSMutableDictionary;

@interface PLFileSystemPersistenceBatchItem : NSObject  {
    NSURL *fileURL;
    NSMutableDictionary *attributes;
}

@property(retain) NSURL * fileURL;
@property(retain) NSMutableDictionary * attributes;


- (id)fileURL;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setFileURL:(id)arg1;
- (void)persist;
- (void)setUInt16:(unsigned short)arg1 forKey:(id)arg2;
- (void)setUUIDString:(id)arg1 forKey:(id)arg2;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;

@end
