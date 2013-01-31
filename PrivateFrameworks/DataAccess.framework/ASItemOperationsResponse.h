/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSNumber, NSArray;

@interface ASItemOperationsResponse : ASItem  {
    NSNumber *_status;
    NSArray *_fetchResponses;
}

+ (id)asParseRules;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)description;
- (void)dealloc;
- (void)setFetchResponses:(id)arg1;
- (id)fetchResponses;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)setStatus:(id)arg1;
- (id)status;

@end
