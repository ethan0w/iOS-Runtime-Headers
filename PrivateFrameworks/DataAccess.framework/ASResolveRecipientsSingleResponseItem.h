/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSNumber, NSString, NSMutableArray;

@interface ASResolveRecipientsSingleResponseItem : ASItem  {
    NSString *_emailAddress;
    NSNumber *_easStatus;
    NSMutableArray *_recipients;
}

@property(retain) NSString * emailAddress;
@property(retain) NSNumber * easStatus;
@property(retain) NSMutableArray * recipients;

+ (id)asParseRules;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)description;
- (void)dealloc;
- (id)recipients;
- (id)emailAddress;
- (void)setEASStatus:(id)arg1;
- (id)easStatus;
- (void)setEmailAddress:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)addRecipient:(id)arg1;

@end
