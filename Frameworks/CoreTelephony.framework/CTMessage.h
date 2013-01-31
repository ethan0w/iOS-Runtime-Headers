/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSObject<CTMessageAddress><NSCopying>, NSArray, NSMutableArray, NSUUID, NSDictionary, CTPhoneNumber, NSString, NSDate, NSMutableDictionary;

@interface CTMessage : NSObject  {
    NSObject<CTMessageAddress><NSCopying> *_sender;
    NSMutableArray *_recipients;
    NSMutableArray *_items;
    NSDictionary *_rawHeaders;
    NSDate *_date;
    unsigned int _messageId;
    int _messageType;
    CTPhoneNumber *_serviceCenter;
    NSString *_subject;
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    unsigned int _replaceMessage;
    NSString *_countryCode;
    NSUUID *_uuid;
}

@property(readonly) NSArray * recipients;
@property(readonly) NSDate * date;
@property(readonly) NSArray * items;
@property(readonly) NSDictionary * rawHeaders;
@property(readonly) unsigned int replaceMessage;
@property unsigned int messageId;
@property int messageType;
@property(copy) CTPhoneNumber * serviceCenter;
@property(copy) NSString * subject;
@property(copy) NSObject<CTMessageAddress><NSCopying> * sender;
@property(copy) NSString * contentType;
@property(readonly) NSString * countryCode;
@property(retain) NSUUID * uniqueIdentifier;


- (id)description;
- (void)dealloc;
- (id)init;
- (id)contentType;
- (void)setCountryCode:(id)arg1;
- (id)recipients;
- (id)countryCode;
- (void)setContentType:(id)arg1;
- (id)subject;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)uniqueIdentifier;
- (id)sender;
- (id)items;
- (id)date;
- (void)setRecipient:(id)arg1;
- (void)setSender:(id)arg1;
- (unsigned int)replaceMessage;
- (id)rawHeaders;
- (void)setServiceCenter:(id)arg1;
- (id)serviceCenter;
- (void)setMessageType:(int)arg1;
- (int)messageType;
- (void)setMessageId:(unsigned int)arg1;
- (unsigned int)messageId;
- (id)allContentTypeParameterNames;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)contentTypeParameterWithName:(id)arg1;
- (void)removePartAtIndex:(unsigned int)arg1;
- (id)addPart:(id)arg1;
- (id)addData:(id)arg1 withContentType:(id)arg2;
- (id)addText:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)removeRecipientsInArray:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)setReplaceMessage:(unsigned int)arg1;
- (void)setRawHeaders:(id)arg1;
- (void)addEmailRecipient:(id)arg1;
- (void)addPhoneRecipient:(id)arg1;
- (id)initWithDate:(id)arg1;

@end
