/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUSRichText : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *contentAdvisory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formattedTextDelimiter;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *markupList;
@property (nonatomic, copy) NSArray *moreGlyphs;
@property (nonatomic, copy) NSNumber *starRating;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *textMaxlines;

+ (id)richText;
+ (id)richTextWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentAdvisory;
- (id)encodedClassName;
- (id)formattedTextDelimiter;
- (id)groupIdentifier;
- (id)markupList;
- (id)moreGlyphs;
- (void)setContentAdvisory:(id)arg1;
- (void)setFormattedTextDelimiter:(id)arg1;
- (void)setMarkupList:(id)arg1;
- (void)setMoreGlyphs:(id)arg1;
- (void)setStarRating:(id)arg1;
- (void)setTextMaxlines:(id)arg1;
- (id)starRating;
- (id)textMaxlines;

@end
