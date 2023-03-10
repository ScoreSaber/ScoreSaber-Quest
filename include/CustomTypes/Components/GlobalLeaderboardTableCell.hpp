#pragma once

#include "CustomTypes/Components/GlobalLeaderboardTableData.hpp"
#include "CustomTypes/Components/ImageButton.hpp"
#include "Data/Player.hpp"
#include "UI/Other/PlayerProfileModal.hpp"

#include "HMUI/ImageView.hpp"
#include "HMUI/TableCell.hpp"
#include "HMUI/TableView.hpp"
#include "HMUI/TableView_IDataSource.hpp"
#include "TMPro/TextMeshProUGUI.hpp"
#include "UnityEngine/Coroutine.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "custom-types/shared/macros.hpp"
#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"

#define GET_FIND_METHOD(mPtr) \
    il2cpp_utils::il2cpp_type_check::MetadataGetter<mPtr>::get()

DECLARE_CLASS_CODEGEN(
    ScoreSaber::CustomTypes::Components, GlobalLeaderboardTableCell, HMUI::TableCell,
    DECLARE_INSTANCE_FIELD(TMPro::TextMeshProUGUI*, rank);
    DECLARE_INSTANCE_FIELD(TMPro::TextMeshProUGUI*, pp);
    DECLARE_INSTANCE_FIELD(TMPro::TextMeshProUGUI*, country);
    DECLARE_INSTANCE_FIELD(TMPro::TextMeshProUGUI*, weekly);
    DECLARE_INSTANCE_FIELD(TMPro::TextMeshProUGUI*, name);
    DECLARE_INSTANCE_FIELD(HMUI::ImageView*, flag);
    DECLARE_INSTANCE_FIELD(HMUI::ImageView*, profile);
    DECLARE_INSTANCE_FIELD(QuestUI::Backgroundable*, bg);
    DECLARE_INSTANCE_FIELD(UnityEngine::Coroutine*, profileRoutine);
    DECLARE_INSTANCE_FIELD(UnityEngine::Coroutine*, flagRoutine);
    DECLARE_INSTANCE_FIELD(ScoreSaber::UI::Other::PlayerProfileModal*, playerProfileModal);

    DECLARE_CTOR(ctor);

    public
    : std::string playerId;
    static GlobalLeaderboardTableCell * CreateCell();
    void Refresh(ScoreSaber::Data::Player& player, ScoreSaber::CustomTypes::Components::GlobalLeaderboardTableData::LeaderboardType leaderboardType);
    void stopProfileRoutine();
    void stopFlagRoutine();
    void OpenPlayerProfileModal();

)