/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface APFormatter : NSFormatter {
    NSCharacterSet * _characterSet;
    NSCharacterSet * _invertedCharacterSet;
    unsigned int  _maxLength;
}

@property (nonatomic) unsigned int maxLength;

+ (id)asciiFormatter:(unsigned int)arg1;
+ (id)asciiSet;
+ (id)formatterForBSFormatter:(int)arg1 withMaxLen:(long)arg2;
+ (id)hexFormatter:(unsigned int)arg1;
+ (id)hexSet;
+ (id)ipFormatter:(unsigned int)arg1;
+ (id)ipOctetFormatter:(unsigned int)arg1;
+ (id)ipv4AddressSet;
+ (id)ipv4AddressWithPrefixSet;
+ (id)ipv6AddressSet;
+ (id)maxLengthFormatter:(unsigned int)arg1;
+ (id)multipleIPFormatter:(unsigned int)arg1;
+ (id)multipleIpAddressesSet;
+ (id)nonZeroNumberOnly:(unsigned int)arg1;
+ (id)numberOnlyFormatter:(unsigned int)arg1;
+ (id)phoneNumberFormatter:(unsigned int)arg1;
+ (id)phoneNumberSet;
+ (id)pogoPasswordSet;
+ (id)portRangeFormatter:(unsigned int)arg1;
+ (id)portRangeSet;
+ (id)romanFormatter:(unsigned int)arg1;
+ (id)romanSet;
+ (id)sharedIPFormatter;
+ (id)sharedIPv4PrefixFormatter;
+ (id)sharedIPv6Formatter;
+ (id)sharedMultipleIPFormatter;
+ (id)sharedPhoneNumberFormatter;

- (id)characterSet;
- (void)dealloc;
- (BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned int)arg2;
- (id)initWithMaxLength:(unsigned int)arg1;
- (id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned int)arg2;
- (id)invertedCharacterSet;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 errorDescription:(id*)arg5;
- (unsigned int)maxLength;
- (void)setCharacterSet:(id)arg1;
- (void)setInvertedCharacterSet:(id)arg1;
- (void)setMaxLength:(unsigned int)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
