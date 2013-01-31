/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLineEnd : OADProperties <NSCopying> {
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned int mIsTypeOverridden : 1;
    unsigned int mIsWidthOverridden : 1;
    unsigned int mIsLengthOverridden : 1;
}

+ (id)defaultProperties;

- (void)setLength:(int)arg1;
- (int)type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)length;
- (BOOL)isLengthOverridden;
- (BOOL)isTypeOverridden;
- (id)initWithDefaults;
- (id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
- (BOOL)isWidthOverridden;
- (void)setWidth:(int)arg1;
- (int)width;
- (void)setType:(int)arg1;

@end
