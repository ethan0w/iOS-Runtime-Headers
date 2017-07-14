/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
 */

@interface EMKLayoutManager : NSLayoutManager {
    NSMutableAttributedString * _attributes;
    UIColor * _currentColor;
    struct CGSize { 
        float width; 
        float height; 
    }  _currentOffset;
    float  _currentScale;
    UIColor * _currentShadowColor;
    BOOL  _emojiConversionActive;
    BOOL  _emojiConversionEnabled;
    NSArray * _emojiConversionLanguages;
    EMKTextEnumerator * _enumerator;
    NSMutableData * _glyphIndexTable;
    EMKGlyphRippler * _rippler;
}

@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled;

- (void).cxx_destruct;
- (id)attributes;
- (BOOL)convertGlyphIndex:(unsigned int)arg1 toAttributeRelativeGlyphIndex:(unsigned int*)arg2 numberOfAttributedGlyphs:(unsigned int*)arg3;
- (void)drawAttributedGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)emojiConversionLanguages;
- (void)flushGlyphIndexTable;
- (id)init;
- (BOOL)isEmojiAnimationActive;
- (BOOL)isEmojiConversionActive;
- (BOOL)isEmojiConversionEnabled;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4 invalidatedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (void)setDelayFrames:(unsigned int)arg1;
- (void)setEmojiConversionActive:(BOOL)arg1;
- (void)setEmojiConversionEnabled:(BOOL)arg1;
- (void)setEmojiConversionLanguages:(id)arg1;
- (void)setPostFrames:(unsigned int)arg1;
- (void)setPreFrames:(unsigned int)arg1;
- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { float x1; float x2; }*)arg2 count:(unsigned int)arg3 font:(id)arg4 matrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)startOrStopTimer;

@end
