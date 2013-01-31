/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetDash : OADDash  {
    unsigned char mType;
    unsigned int mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (int)type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isTypeOverridden;
- (id)initWithDefaults;
- (id)equivalentCustomDash;
- (void)setType:(int)arg1;

@end
