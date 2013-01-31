/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
    NSData *_internal;
    NSString *_path;
    NSData *_parent;
    BOOL _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned int)arg1;

- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (const void*)bytes;
- (id)initWithContentsOfURL:(id)arg1;
- (id)data;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)length;
- (id)initWithImmutableData:(id)arg1;
- (id)_initWithFile:(id)arg1;
- (id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2;
- (BOOL)mf_immutable;
- (id)_initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 from:(id)arg2 retainingParent:(BOOL)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;

@end
