/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDOfficeArt, NSMutableString, WDParagraphProperties, WDCharacterProperties;

@interface WDListLevel : NSObject  {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    long mLegacySpace;
    long mLegacyIndent;
    int mJustification;
}


- (void)dealloc;
- (BOOL)justificationOverridden;
- (long)legacyIndent;
- (long)legacySpace;
- (BOOL)legacy;
- (BOOL)textOverridden;
- (BOOL)suffixOverridden;
- (BOOL)legalOverridden;
- (BOOL)restartNumberingOverridden;
- (BOOL)imageBulletOverridden;
- (BOOL)imageBullet;
- (BOOL)numberFormatOverridden;
- (BOOL)startNumberOverridden;
- (int)suffix;
- (BOOL)legal;
- (BOOL)restartNumbering;
- (void)setJustification:(int)arg1;
- (void)setLegacyIndent:(long)arg1;
- (void)setLegacySpace:(long)arg1;
- (void)setLegacy:(BOOL)arg1;
- (void)setSuffix:(int)arg1;
- (void)setLegal:(BOOL)arg1;
- (void)setRestartNumbering:(BOOL)arg1;
- (void)setNumberFormat:(int)arg1;
- (void)setStartNumber:(long)arg1;
- (int)numberFormat;
- (long)startNumber;
- (int)justification;
- (id)characterProperties;
- (id)paragraphProperties;
- (id)initWithDocument:(id)arg1;
- (id)image;
- (id)text;
- (void)setText:(id)arg1;
- (void)setImage:(id)arg1;

@end
