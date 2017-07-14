/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditAdjustmentsVersion : NSObject {
    unsigned int  _majorVersion;
    unsigned int  _minorVersion;
    NSString * _platform;
}

@property (nonatomic, readonly) unsigned int majorVersion;
@property (nonatomic, readonly) unsigned int minorVersion;
@property (nonatomic, readonly, copy) NSString *platform;
@property (nonatomic, readonly) NSString *string;

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned int)arg1 minor:(unsigned int)arg2 platform:(id)arg3;

- (int)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithMajor:(unsigned int)arg1 minor:(unsigned int)arg2;
- (id)initWithMajor:(unsigned int)arg1 minor:(unsigned int)arg2 platform:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAdjustmentVersion:(id)arg1;
- (unsigned int)majorVersion;
- (unsigned int)minorVersion;
- (id)platform;
- (id)string;

@end
