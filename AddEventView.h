#ifndef ADDEVENTVIEW_H
#define ADDEVENTVIEW_H
#include "View.h"
#include "Event.h"
#include "Button.h"
#include "Date.h"
#include "EditStringView.h"
#include "EditTimeView.h"

namespace PlannerCLI {
    class AddEventView : public View
    {
    public:
        inline static const int TITLE_FIELD = 0;
        inline static const int LOCATION_FIELD = 1;
        inline static const int START_TIME_FIELD = 2;
        inline static const int END_TIME_FIELD = 3;
        inline static const int DESCRIPTION_FIELD = 4;
        inline static const int COLOR_FIELD = 5;
        inline static const int SAVE_BUTTON = 6;
        inline static const int CANCEL_BUTTON = 7;
        inline static const int FIELD_SIZE = 8;

        void Create(Event& newEvent, Date date, int* navigation);

        std::string EditTitle(const std::string& title);
        std::string EditDescription(const std::string& description);
        std::string EditLocation(const std::string& location);
        void EditColor();
        Time EditStartTime(const Time& time);
        Time EditEndTime(const Time& time);

    protected:
        void DisplayHelpInfo() override;
    private:
        Button* m_button[FIELD_SIZE];
    };

}

#endif //ADDEVENTVIEW_H