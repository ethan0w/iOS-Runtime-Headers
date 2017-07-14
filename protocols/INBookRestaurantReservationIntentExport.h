/* Generated by RuntimeBrowser.
 */

@protocol INBookRestaurantReservationIntentExport <NSObject, JSExport>

@required

- (NSDateComponents *)bookingDateComponents;
- (NSString *)bookingIdentifier;
- (INRestaurantGuest *)guest;
- (NSString *)guestProvidedSpecialRequestText;
- (id)init;
- (unsigned int)partySize;
- (INRestaurant *)restaurant;
- (INRestaurantOffer *)selectedOffer;
- (void)setBookingDateComponents:(NSDateComponents *)arg1;
- (void)setBookingIdentifier:(NSString *)arg1;
- (void)setGuest:(INRestaurantGuest *)arg1;
- (void)setGuestProvidedSpecialRequestText:(NSString *)arg1;
- (void)setPartySize:(unsigned int)arg1;
- (void)setRestaurant:(INRestaurant *)arg1;
- (void)setSelectedOffer:(INRestaurantOffer *)arg1;

@end
