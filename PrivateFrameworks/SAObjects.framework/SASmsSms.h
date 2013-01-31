/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAPersonAttribute, NSDate, NSNumber, NSURL;

@interface SASmsSms : SADomainObject  {
}

@property(copy) NSURL * attachment;
@property(copy) NSDate * dateSent;
@property(copy) NSString * message;
@property(copy) NSArray * msgRecipients;
@property(retain) SAPersonAttribute * msgSender;
@property(copy) NSNumber * outgoing;
@property(copy) NSArray * recipients;
@property(copy) NSString * sender;
@property(copy) NSString * subject;
@property(copy) NSString * timezoneId;

+ (id)smsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sms;

- (id)attachment;
- (void)setAttachment:(id)arg1;
- (void)setTimezoneId:(id)arg1;
- (id)timezoneId;
- (id)outgoing;
- (id)msgSender;
- (id)msgRecipients;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)recipients;
- (id)dateSent;
- (void)setMsgRecipients:(id)arg1;
- (void)setMsgSender:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setDateSent:(id)arg1;
- (id)subject;
- (id)message;
- (void)setSubject:(id)arg1;
- (id)sender;
- (void)setMessage:(id)arg1;
- (id)groupIdentifier;
- (void)setSender:(id)arg1;
- (void)setRecipients:(id)arg1;

@end
