/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNNameComponentsStringTokenizer : NSObject {
    NSPersonNameComponents * _components;
    NSString * _string;
    NSArray * _tokens;
}

@property (retain) NSPersonNameComponents *components;
@property (copy) NSString *string;
@property (retain) NSArray *tokens;

+ (id)componentsFromString:(id)arg1;
+ (BOOL)isNamePrefix:(id)arg1;
+ (BOOL)isNameSuffix:(id)arg1;
+ (BOOL)isNobiliaryParticle:(id)arg1;
+ (id)nameComponentElements;
+ (id)namePrefixElements;
+ (id)nameSuffixElements;
+ (id)nobiliaryParticleElements;
+ (id)tokensByAdjustingForNobiliaryParticles:(id)arg1;
+ (id)tokensFromString:(id)arg1 nameOrder:(int*)arg2;
+ (id)uncachedNameComponentElements;
+ (id)whitespaceTokens:(id)arg1;

- (void)adjustTokensForNobiliaryParticles;
- (id)components;
- (void)dealloc;
- (void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(int)arg1;
- (void)extractNamePrefixFromBeginning;
- (void)extractNameSuffixFromEnd;
- (void)extractNicknameFromQuotedContent;
- (id)initWithString:(id)arg1;
- (id)parseComponents;
- (void)removeParentheticalContent;
- (void)setComponents:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)string;
- (id)tokens;

@end
