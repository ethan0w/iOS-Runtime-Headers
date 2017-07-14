/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadlineTemplate : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    FCTextInfo * _headlineBylineTextInfo;
    FCTextInfo * _headlineExcerptTextInfo;
    FCTextInfo * _headlineTitleTextInfo;
    NSArray * _loadableFonts;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) FCTextInfo *headlineBylineTextInfo;
@property (nonatomic, copy) FCTextInfo *headlineExcerptTextInfo;
@property (nonatomic, copy) FCTextInfo *headlineTitleTextInfo;
@property (nonatomic, copy) NSArray *loadableFonts;

+ (id)_defaultBackgroundColor;
+ (id)_defaultTitleTextColor;
+ (id)_headlineTemplateWithJSON:(id)arg1 versionNumber:(id)arg2;
+ (id)headlineTemplateWithJSON:(id)arg1;
+ (id)templateByMergingTemplate:(id)arg1 intoTemplate:(id)arg2;

- (void).cxx_destruct;
- (id)_allThemePropertyNames;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)headlineBylineTextInfo;
- (id)headlineExcerptTextInfo;
- (id)headlineTitleTextInfo;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 versionNumber:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)loadableFonts;
- (void)mergeFromTemplate:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setHeadlineBylineTextInfo:(id)arg1;
- (void)setHeadlineExcerptTextInfo:(id)arg1;
- (void)setHeadlineTitleTextInfo:(id)arg1;
- (void)setLoadableFonts:(id)arg1;

@end
