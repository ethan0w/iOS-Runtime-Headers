/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, NSMutableSet;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem  {
    NSMutableSet *_changedParameters;
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

@property(retain) NSMutableSet * changedParameters;
@property(retain) NSString * nameAttribute;
@property(retain) NSString * typeAttribute;


- (void)dealloc;
- (id)typeAttribute;
- (id)changedParameters;
- (id)nameAttribute;
- (void)parserFoundAttributes:(id)arg1;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addChangedParameter:(id)arg1;
- (void)setChangedParameters:(id)arg1;
- (void)setTypeAttribute:(id)arg1;
- (void)setNameAttribute:(id)arg1;

@end
