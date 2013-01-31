/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL, ICSDateValue, NSString;

@interface CalDAVUpdateOwnerItem : CoreDAVItem  {
    ICSDateValue *_dtstamp;
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSURL *_address;
    NSString *_emailAddress;
}

@property(retain) ICSDateValue * dtstamp;
@property(retain) NSString * displayName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSURL * address;
@property(retain) NSString * emailAddress;


- (id)description;
- (void)dealloc;
- (void)setDisplayName:(id)arg1;
- (id)emailAddress;
- (id)copyParseRules;
- (void)setDisplayNameItem:(id)arg1;
- (void)setEmailAddressItem:(id)arg1;
- (void)setAddressItem:(id)arg1;
- (void)setDtstampItem:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (id)displayName;
- (void)setAddress:(id)arg1;
- (id)address;
- (void)setLastName:(id)arg1;
- (id)lastName;
- (void)setFirstName:(id)arg1;
- (id)firstName;
- (void)setDtstamp:(id)arg1;
- (id)dtstamp;
- (void)setEmailAddress:(id)arg1;

@end
